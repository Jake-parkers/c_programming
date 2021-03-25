/*
Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
*/

#include <stdio.h>

#define TABSIZE 4
#define TAB '\\'
#define BLANK ' '

char string[1000];

main()
{
    int c;
    int totalChars, noOfBlanks, count;
    totalChars = 0;
    count = 0;
    noOfBlanks = 0;
    int nextStop;
    extern char string[1000];

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++noOfBlanks;
        } else {
            while (noOfBlanks > 0)
            {
                if (noOfBlanks < TABSIZE)
                    for (int i = 0; i < noOfBlanks; i++)
                    {
                        string[count++] = BLANK;
                        --noOfBlanks;
                    }
                else {
                    nextStop = TABSIZE - (totalChars % TABSIZE);
                    /* When either a tab or a single blank would suffice to reach a tab stop, a single blank should be given preference because it is more semantically readable */
                    if (nextStop == 1)
                        string[count++] = BLANK;
                    else {
                        string[count++] = TAB;
                        string[count++] = 't';
                    }
                    
                    totalChars = totalChars + nextStop;
                    noOfBlanks = noOfBlanks - nextStop;
                }
            }
            // putchar(c);
            string[count++] = c;
            ++totalChars;
        }

        if (c == '\n') {
            totalChars = 0;
            string[count++] = '\n';
        }
    }

    string[count++] = '\0';
    printf("%s", string);
    /*format(string, count);*/

}

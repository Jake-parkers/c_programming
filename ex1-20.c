/**
 * Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
 * 
 */

#include <stdio.h>

#define TAB 4
main() {
    int c;
    int noOfChars;
    noOfChars = 0;
    int nextTabStop;
    while ((c = getchar()) != EOF) {
        ++noOfChars;
        if (c == '\t') {
            nextTabStop = TAB - (noOfChars % TAB);
            for (int k = 0; k < nextTabStop; ++k) 
                putchar(' ');
        } else 
            putchar(c);

        if (c == '\n') 
            noOfChars = 0;
    }

    printf("%d\t%d\n", noOfChars, nextTabStop);
    
}
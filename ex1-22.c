#include <stdio.h>

#define MAXLEN 30
#define LEN 1000

int getline(char s[], int lim);
void shiftRight(char s[], int start, int end);
void fold(char s[], char c, int currentIndex);

main()
{
    char string[1000];
    int len;
    while ((len = getline(string, LEN)) > 0);

}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int lastNonBlankIndex, lastBlankIndex;
    int c, i, count;
    count = 0;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        ++count;
        if (c != ' ' || c != '\t')
            lastNonBlankIndex = i;
        if (c == ' '|| c == '\t' )
            lastBlankIndex = i;

        if (count == MAXLEN) {
            if (s[i - 1] == ' ' || s[i - 1] == '\t') {
                //shiftRight(s, lastNonBlankIndex, i);
                s[lastNonBlankIndex - 1] = '\n';
            }
            else {
                //shiftRight(s, lastBlankIndex, i);
                s[lastBlankIndex] = '\n';
            }
            //i = i + 1;
            if (i != lastBlankIndex)
                s[i] = c;
            count = 0;
        } else {
            s[i] = c;
        }
    }
    if (c == '\n') {
        ++i;
    }
    s[i] = '\0';
    myprint(s, i);
    return i;
}

void myprint(char s[], int len)
{
    for(int j = 0; j < len; j++) {
        printf("%c", s[j]);
    }
}


void shiftRight(char s[], int start, int end)
{
    for (int i = end; i >= start; --i)
        s[i + 1] = s[i];
}

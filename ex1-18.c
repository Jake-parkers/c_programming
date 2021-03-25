/*
Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char s[]);
int validLineEnd(char s[], int textlength);
void copy(char from[], char to[], int end);

main()
{
    int textlength;
    char line[MAXLINE];
    char escapedLine[MAXLINE];
    char test[MAXLINE];
    int cleanStringEnd, m;
    m = 0;
    while ((textlength = getline(line)) > 0) {
        int i;
        cleanStringEnd = validLineEnd(line, textlength);

        if (cleanStringEnd > 0) {
            copy(escapedLine, line, cleanStringEnd);
            /* append to bigger array just to see that all tabs and trailing spaces were removed */
            for (int k = 0; k <= cleanStringEnd + 1; k++) {
                test[m] = escapedLine[k];
                ++m;
            }

        }
    }
    test[m] = '\0';
    printf("%s", test);
    return 0;
}

int getline(char line[])
{
    int c, i;

    i = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        line[i] = c;
        ++i;
    }
    if (c == '\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* Get the index of non blanks or tab. Start from the end of the string since it will be shorter to loop from there */
int validLineEnd(char line[], int textlength) {
    int i, cleanStringEnd;
    cleanStringEnd = 0;
    for (i = textlength - 2; i > 0; --i) {
        if (line[i] == ' ' || line[i] == '\t');
        else {
            cleanStringEnd = i;
            break;
        }
    }
    return cleanStringEnd;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[], int endpoint)
{
    int j;
    for (j = 0; endpoint > 0 && j <= endpoint; ++j){
        to[j] = from[j];
    }

    to[endpoint + 1] = '\n';
}
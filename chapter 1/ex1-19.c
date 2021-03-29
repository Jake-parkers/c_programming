/*
Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[]);

main() 
{
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    char new[MAXLINE]; /* current input line */

    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void reverse(char s[]) {
    char temp;
    int i, stringEnd;
    i = 0;
    while (s[i] != '\n')
        ++i;

    if (s[i] == '\0') stringEnd = i;
    printf("%d\n", stringEnd);
    i = 0;

    /* -2 because '\n' and '\0' take up the last two positions of a character array */
    
    for (int k = stringEnd - 2; k > 0; --k) {
        temp = s[k];
        s[k] = s[i];
        s[i] = temp;
        ++i;
    }
}
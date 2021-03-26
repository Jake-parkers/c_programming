/*
Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.
*/

#include <stdio.h>

int search(char s[], char c);

void squeeze(char s1[], char s2[]);

main()
{
    char s1[] = "abcde";
    char s2[] = "abcpf";
    squeeze(s1, s2);
    printf("%s", s1);

}

void squeeze(char s1[], char s2[]) 
{
    int found;
    int i, j;
    for (i = j = 0; s1[i] != '\0'; ++i) {
        found = search(s2, s1[i]);
        if (!found)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}

int search(char s[], char c) 
{
    for (int i = 0; s[i] != '\0'; ++i)
        if (s[i] == c) 
            return 1;
    return 0;
}
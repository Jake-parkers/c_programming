/*
Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.)
*/

#include <stdio.h>

int any(char s1[], char s2[]);

int search(char s[], char c) ;

main()
{
    char s1[] = "Ayotemilowo";
    char s2[] = "Joshua";
    printf("%d", any(s1, s2));
}

int any(char s1[], char s2[]) 
{
    int index;
    for (int i = 0; s2[i] != '\0'; ++i) 
        if ((index = search(s1, s2[i])) != -1)
            return index;
    return index;
}

/* returns the index where the character is found */
int search(char s[], char c) 
{
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        if (s[i] == c) {
            return i;
        }
    return -1;
}
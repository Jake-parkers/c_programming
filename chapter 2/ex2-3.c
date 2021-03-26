/* Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F. */

#include <stdio.h>

int htoi(char s[]);
int compute(char s[], int i);

int main() 
{

    printf("%d", htoi("E7A9"));
}

int htoi(char s[])
{
    if ((s[1] == 'X' || s[1] == 'x') && s[0] == '0')
        return compute(s, 2);
    else
        return compute(s, 0);
}

int compute(char s[], int i) 
{
    int k = i;
    int n = 0;
    for (k; ((s[k] >= '0' && s[k] <= '9') || (s[k] >= 'a' && s[k] <= 'f') || (s[k] >= 'A' && s[k] <= 'F')); ++k) {
        if (s[k] == 'A' || s[k] == 'a')
            n = 16 * n + 10;
        else if (s[k] == 'B' || s[k] == 'b')
            n = 16 * n + 11;
        else if (s[k] == 'C' || s[k] == 'c')
            n = 16 * n + 12;
        else if (s[k] == 'D' || s[k] == 'd')
            n = 16 * n + 13;
        else if (s[k] == 'E' || s[k] == 'e')
            n = 16 * n + 14;
        else if (s[k] == 'F' || s[k] == 'f')
            n = 16 * n + 15;
        else 
            n = 16 * n + (s[k] - '0');
    }
    return n;
}
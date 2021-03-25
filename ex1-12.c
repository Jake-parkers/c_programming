#include <stdio.h>

main()
{
    int c, s;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            putchar('\n');
        } else {
           putchar(c); 
        }
    }
}
#include <stdio.h>

/* copy input to output; 1st version*/
main()
{
    int c;
    printf("%d\n", EOF);
    while (c = getchar() != EOF) {
        putchar(c);
    }
}
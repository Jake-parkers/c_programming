/* 
    * Write a loop equivalent to the for loop above without using && or ||. 
    * for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
s       s[i] = c;
    * */

#include <stdio.h>

#define lim 1000

main() 
{
    int i, c;

    
    while (i < lim - 1)
    {
        c = getchar() != '\n';
        if (c == '\n') {
            break;
        }

        if (c == EOF) {
            break;
        }
    }
        
}
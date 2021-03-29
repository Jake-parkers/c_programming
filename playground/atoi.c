#include <limits.h>
#include <float.h>
#include <string.h>

int atoi(char s[]);
int power(int base, int n);

main()
{
    printf("%d", atoi_v2("45000"));
}

/*  The atoi function takes advantage of the fact that in base 10, the difference between each position is of order 10 */
int atoi(char s[])
{
    int i, n;

    n = 0;

    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}
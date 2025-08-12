#include <stdio.h>

/* Includes an example of 2 and -3 up to the ninth power, 
the side prints the iteration number we are currently on */

int power(int m, int n);

int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p *base;
    return p;
}
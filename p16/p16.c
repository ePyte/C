#include <stdio.h>

#define BASE 2
#define EXP 1000

long long powFunc(int base, int exp)
{
    long long result = base;
    while(exp > 1)
    {
        result *= base;
        exp--;
    }
    return result;
}


int main()
{
    printf("%lld\n", powFunc(BASE, EXP));

    return 1;
}
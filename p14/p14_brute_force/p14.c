#include <stdio.h>

#define MAXLIMIT 1000000

int main()
{
    int maxChain=0;
    long long numberWithMaxChain;
    int chain;
    long long newNumber;
    for(int i = 1; i < MAXLIMIT; ++i)
    {
        chain = 1;
        newNumber = i;

        while(newNumber!=1)
        {
            if(newNumber % 2 == 0)
            {
                newNumber /= 2;
            }
            else
            {
                newNumber *= 3;
                ++newNumber;
            }
            ++chain;
        }

        if(chain > maxChain)
        {
            maxChain = chain;
            numberWithMaxChain = newNumber;
        }
    }

    printf("%lld\n", numberWithMaxChain);
    return 1;
}
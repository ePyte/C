#include <stdio.h>

int main()
{

    int sumValue = 0;

    for(int i = 1; i < 1000; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sumValue += i;
        }
    }

    printf("%d\n", sumValue);

    return 0;
}

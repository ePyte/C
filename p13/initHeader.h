#include <stdio.h>


void initArrayFunc(int sumArray[], int lengthOfSum)
{
    for(int i = 0; i < lengthOfSum; ++i)
    {
        sumArray[i] = 0;
    }
}
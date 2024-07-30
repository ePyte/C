#include <stdio.h>

#define BASE 2
#define EXP 1000 
#define LENGTH 1000 //assumption: the result will be max 1000 digit long

#include "operationsHeader.h"

int main()
{
    int resultArray[LENGTH];

    initArray(resultArray);

    long long result = sumOfDigits(resultArray);
    printf("%lld\n", result);

    return 1;
}
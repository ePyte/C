#include <stdio.h>

#define MAXLIMIT 1000

#include "enumMainNumbers.h"
#include "operationsHeader.h"
#include "exchangeHeader.h"

int main()
{

    int sum = addTogetherNumbers();
    printf("%d\n", sum);

    return 1;
}


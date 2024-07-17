#include <stdio.h>

#define NUMOFROWS 100
#define NUMOFDIGITS 50

#include "initHeader.h"
#include "readInputHeader.h"

int main()
{
    int lengthOfSum = 150;
    int sumArray[lengthOfSum];//assumption each addition will add one digit to the number (worst case)
    initArrayFunc(sumArray, lengthOfSum);
    int firstTenDigits = firstTenDigitsFunc(sumArray, lengthOfSum);

    return 1;
}
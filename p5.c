#include <stdio.h>

#define LOWER_LIMIT 1
#define UPPER_LIMIT 20


int isPrime(int nextNumber)
{
    if (nextNumber< 2)
    {
        return 1; // not prime
    }

    int incNumber = 2;

    while (incNumber < nextNumber)
    {
        if ( nextNumber % incNumber == 0)
        {
            return 1; // not prime
        }

        incNumber++;
    }

    return 0; // prime
}

int intitPrimeNumbers(int primeNumbersArray[], int sizePrimeNumberArray)
{
    int numberOfPrimes = 0;

    for (int i = LOWER_LIMIT; i < UPPER_LIMIT; ++i)
    {
        if (isPrime(i) == 0)
        {
            primeNumbersArray[numberOfPrimes] = i;
            ++numberOfPrimes;
        }
    }

    return numberOfPrimes;
}



int main()
{


    int sizePrimeNumberArray = UPPER_LIMIT;
    int primeNumbersArray[sizePrimeNumberArray];

    int numberOfPrimes = intitPrimeNumbers(primeNumbersArray, sizePrimeNumberArray);

    int primeFactorsArray = UPPER_LIMIT*UPPER_LIMIT;
    int primeFactorsArray[arraySizePrimeFactors]; // assumption, number [LOWER_LIMIT, UPPER_LIMIT] has maximum (UPPER_LIMIT*UPPER_LIMIT) prime factors
    int indexArray  = 0;

    for(int i = 0; i < numberOfPrimes; ++i)
    {
        printf("%d\n", primeNumbersArray[i]);
    }
}

/*
1 -> 1
2 -> 2
3 -> 3
4 -> 2 * 2
5 -> 5
6 -> 2 * 3
7 -> 7
8 -> 2 * 2 * 2
9 -> 3 * 3
10 -> 2 * 5
11 -> 11
12 -> 2 * 2 * 3
13 -> 13
14 -> 2 * 7
15 -> 3 * 5
16 -> 2 * 2 * 2 * 2
17 -> 17
18 -> 2 * 3 * 3
19 -> 19
20 - > 2 * 2 * 5

1 2 2
2 3 6
6 4 

*/
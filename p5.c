#include <stdio.h>

#define LOWER_LIMIT 1
#define UPPER_LIMIT 20




void initBaseValuesPrimeNumbersArray(int primeNumbersArray[], int sizePrimeNumberArray)
{
    for (int i = 0; i < sizePrimeNumberArray; ++i)
    {
        primeNumbersArray[i] = -1;
    }

}

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


void initBaseValuesPrimeFactorsArray(int primeFactorsArray[][], int numberOfRowsPrimeFactors, int numberOfPrimes, int primeNumbersArray[])
{
        //first line contains the primes
        for (int j = 0; j < numberOfPrimes; ++j)
        {
            primeFactorsArray[0][j] = primeNumbersArray[j];
        }

        for (int i = 1; i < numberOfRowsPrimeFactors; ++i)
        {
            for (int j = 0; j < numberOfPrimes; ++j)
            {
                primeFactorsArray[i][j] = 0;
            }
        }

}


int main()
{


    int sizePrimeNumberArray = UPPER_LIMIT; // assumption until UPPER_LIMIT only UPPER_LIMIT primes are
    int primeNumbersArray[sizePrimeNumberArray];

    initBaseValuesPrimeNumbersArray(primeNumbersArray, sizePrimeNumberArray);
    int numberOfPrimes = intitPrimeNumbers(primeNumbersArray, sizePrimeNumberArray);

    int numberOfRowsPrimeFactors = 1+(UPPER_LIMIT-LOWER_LIMIT+1); //first line: primes; other lines the numbers in increasing order
    int primeFactorsArray[numberOfRowsPrimeFactors][numberOfPrimes];
    initBaseValuesPrimeFactorsArray(primeFactorsArray, numberOfRowsPrimeFactors, numberOfPrimes, primeNumbersArray);
    int primeFactorsArray[arraySizePrimeFactors]; // assumption, number [LOWER_LIMIT, UPPER_LIMIT] has maximum (UPPER_LIMIT*UPPER_LIMIT) prime factors
    int indexArray  = 0;
    */
    for(int i = 0; i < sizePrimeNumberArray; ++i)
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
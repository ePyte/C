#ifndef ENUMMAINNUMBERS_H
#define ENUMMAINNUMBERS_H


typedef struct numberWithDigits{
    int numberOfDigits;
    int ones;
    int tens;
    int hundreds;
}numberWithDigitsStr;

enum mainNumbers
{
    ONE = 3,
    TWO = 3,
    THREE = 5,
    FOUR = 4,
    FIVE = 4,
    SIX = 3,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    ELEVEN = 6,
    TWELVE = 6,
    THIRTEEN = 8,
    FOURTEEN = 8,
    FIFTEEN = 7,
    SIXTEEN = 7,
    SEVENTEEN = 9,
    EIGHTEEN = 9,
    NINETEEN = 8,
    TWENTY = 6,
    THIRTY = 6,
    FORTY = 5,
    FIFTY = 5,
    SIXTY = 5,

    THOUSAND = 7,
    AND = 3;
};

int countCharsOfNumberFunc(numberWithDigitsStr * numberDividedPtr)
{

}

void divideNumberFunc(int nextNumber, numberWithDigitsStr * numberDividedPtr)
{
    numberDividedPtr->hundreds = nextNumber / 100;
    numberDividedPtr->tens = (nextNumber % 100) / 10;
    numberDividedPtr->ones = (nextNumber % 10);
}

int numberOfCharsFunc(int nextNumber)
{
    int sumOfDigits = 0;
    numberWithDigitsStr numberDivided = {0, 0, 0, 0};
    numberWithDigitsStr * numberDividedPtr = &newNumber;
    if(nextNumber == MAXLIMIT)
    {
        return ONE + THOUSAND;
    }
    divideNumberFunc(nextNumber, numberDividedPtr);
    return countCharsOfNumberFunc(numberDividedPtr);
}


int addTogetherNumbers()
{
    int sum = 0;

    for(int i = 1; i <= MAXLIMIT; ++i)
    {
        sum += numberOfCharsFunc(i);
    }
    return sum;
}


#endif
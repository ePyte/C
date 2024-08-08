#ifndef MULTIPLICATIONSHEADER_H
#define MULTIPLICATIONSHEADER_H

typedef struct numberInBaseTen
{
    int ones;
    int tens;
    int hundreds;
}baseTypeStruct;

void incArraySize(int ** mulArray, int * startIndex, int * endIndex)
{
    (*startIndex) = (*endIndex);
    (*endIndex) += SIZESTEP;
    int * ptr = realloc((*mulArray), (*endIndex) * sizeof(int));
    if(ptr == NULL)
    {
        printf("Error: memory reallocation has failed.");
        exit(0);
    }
    *mulArray = ptr;
    initValArray(*mulArray, *startIndex, *endIndex);
}

void addDigitToArrayOverTen(int * helperArray, int index, int number)
{
    int overTen = 0;

    while(*(helperArray+index) + number + overTen >= 10)
    {
        *(helperArray+index) = (*(helperArray+index) + number + overTen) % 10;
        number = 0;
        overTen = 1;
        ++index;
    }

    *(helperArray+index) = *(helperArray+index) + overTen;

}


void multiplyDigits(int ** mulArray, int endIndex, int * helperArray, int shift, int multiplier)
{   
    int overTens = 0;
    for(int j = 0; j < endIndex; ++j)
    {
        if((*mulArray)[j] != -1)
        {
                addDigitToArrayOverTens(helperArray, j+shift, ((*mulArray)[j] * multiplier + overTen) % 10);




        }
    }
}

void determineBaseValues(baseTypeStruct * baseValues, int nextNumber)
{
    baseValues->hundreds = nextNumber / 100;
    baseValues->tens = (nextNumber % 100) / 10;
    baseValues->ones = nextNumber % 10;
}

void multiplication(int ** mulArray, int * startIndex, int * endIndex)
{
    (*mulArray)[0] = FACTLOWLIMIT;

    for(int i = 0; i < (*endIndex); ++i)
    {
        printf("%d", (*mulArray)[i]);
    }

    int overTen = 0;

    baseTypeStruct baseValues = {0, 0, 0};

    for(int i = FACTLOWLIMIT+1; i <= FACTUPLIMIT; ++i)
    {
        determineBaseValues(&baseValues, int i);
        int * helperArray = (int *) malloc(*endIndex * sizeof(int));
        setZeroArrayFunc(helperArray, *endIndex);
        if(baseValues->hundreds >= 100)
        {
            multiplyDigits(mulArray, *endIndex, helperArray, 2, baseValues->hundreds);
        }




/*
            if((j+2) == (*endIndex-1)) // max. mul 100 which means +2 digits in the array
            {
                incArraySize(mulArray, startIndex, endIndex);
            }
*/
        free(helperArray);

    }
}

#endif
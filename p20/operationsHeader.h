#ifndef OPERATIONSHEADER_H
#define OPERATIONSHEADER_H

void initValArray(int mulArray[], int start, int end)
{
    for(int i = start; i < end; ++i)
    {
        mulArray[i] = -1;
    }
}


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

int sumFunc(int ** mulArray, int * endIndex)
{
    int sum = 0;
    for(int i = 0; i< *endIndex; ++i)
    {
        if(*((*mulArray)+i) == -1)
        {
            break;
        }
        sum += *(mulArray)[i];
    }
    return sum;

}

void multiplication(int ** mulArray, int * startIndex, int * endIndex)
{
    (*mulArray)[0] = FACTLOWLIMIT;
    int overTen = 0;
    for(int i = FACTLOWLIMIT+1; i <= FACTUPLIMIT; ++i)
    {
        for(int j = *startIndex; j < *endIndex; ++j)
        {
            if((*mulArray)[j] != -1)
            {
                if(((*mulArray)[j]) * 2 + overTen >= 10)
                {
                    (*mulArray)[j] = ((*mulArray)[j] * 2 + overTen) % 10;
                    ++overTen;
                }
                else
                {
                    (*mulArray)[j] *= 2;
                    (*mulArray)[j] += overTen;
                    overTen = 0;
                }
                if((j+2) == (*endIndex-1)) // max. mul 100 which means +2 digits in the array
                {
                    incArraySize(mulArray, startIndex, endIndex);
                }
            }
        }
    }
        printf("hello\n");
}

int factorialDigitsSum(int ** mulArray, int * startIndex, int * endIndex)
{
    multiplication(mulArray, startIndex, endIndex);

    for(int i = 0; i < (*endIndex); ++i)
    {
        printf("%d", (*mulArray)[i]);
    }
    int sum = sumFunc(mulArray, endIndex);
    return sum;
}

#endif
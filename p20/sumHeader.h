#ifndef SUMHEADER_H
#define SUMHEADER_H

int sumFunc(int ** mulArray, int * endIndex)
{
    int sum = 0;
    for(int i = 0; i< *endIndex; ++i)
    {
        if(*((*mulArray)+i) == -1)
        {
            break;
        }
        sum += (*mulArray)[i];
    }
    return sum;
}

int factorialDigitsSum(int ** mulArray, int * startIndex, int * endIndex)
{
    printf("1. fv.");//error
    
    multiplication(mulArray, startIndex, endIndex);
    printf("after mult");
    for(int i = 0; i < (*endIndex); ++i)
    {
        printf("%d", (*mulArray)[i]);

    }
        printf("\n");
    int sum = sumFunc(mulArray, endIndex);
    
    return sum;
}
#endif
void initArray(int resultArray[], int * length)//the lowest decimal in the last cell
{
    for(int i = 0; i < (*length)-1; ++i)
    {
        resultArray[i] = -1;
    }
    resultArray[(*length)-1] = BASE;
}

void doubleArraySize(int resultArray[], int* length)
{
    int prevLength = (*length);
    *length *= 2;

    int * ptr = (int *)realloc(resultArray, (*length) * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory reallocation has failed.\n");
        exit(0);
    }
    resultArray = ptr;
    copyArray(prevLength, resultArray, (*length));

}


void powFunc(int resultArray[], int * length)
{
    int exp = EXP;
    int overTen = 0;

    while(exp>1)
    {
        for(int i = 0; i < (*length); ++i)//turn the direction
        {
            if(resultArray[i] == -1)//exit from for cycle
            {
                if(overTen == 1)
                {
                    resultArray[i] = overTen;
                }
                overTen = 0;
                --exp;//exit from while cycle
                break;
            }

            if((BASE * resultArray[i] + overTen) >= 10)
            {
                resultArray[i]= ((BASE * resultArray[i] + overTen) % 10);
                overTen = 1;
            }
            else
            {
                resultArray[i]= BASE * resultArray[i] + overTen;
                overTen = 0;
            }

            if((i == ((*length)-2)) && (overTen == 1))
            {
                doubleArraySize(int resultArray[], int * length)
            }
        }
    }
}


int addDigits(int resultArray[])
{
    long long sum = 0;
    for(int i = LENGTH-1; i >= 0; --i)
    {
        if(resultArray[i] != -1)
        {
            sum += (long long)resultArray[i];
        }
        else
        {
            break;
        }
    }
    return sum;
}

long long sumOfDigits(int resultArray[], int * length)
{
    powFunc(resultArray, length);

    long long result = addDigits(resultArray);
    return result;
}


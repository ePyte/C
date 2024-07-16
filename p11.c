#include <stdio.h>

#define NUMBEROFCOLS 20
#define NUMBEROFROWS 20

int nextDigit(char currentChar)
{
    int currentDigit = 0;
    switch(currentChar)
    {
        case '1':
            currentDigit = 1;
            break;
        case '2':
            currentDigit = 2;
            break;
        case '3':
            currentDigit = 3;
            break;
        case '4':
            currentDigit = 4;
            break;
        case '5':
            currentDigit = 5;
            break;
        case '6':
            currentDigit = 6;
            break;
        case '7':
            currentDigit = 7;
            break;
        case '8':
            currentDigit = 8;
            break;
        case '9':
            currentDigit = 9;
            break;
        case '0':
            currentDigit = 0;
            break;
        default:
            currentDigit = 0;
            break;
    }
    return currentDigit;
}

int getInt(char c, char d)
{
    return nextDigit(c) * 10 + nextDigit(d);
}

int main()
{

    FILE *fptr;
    fptr = fopen("p10_inputs.txt", "r");


    if(fptr == NULL)
    {
    printf("Not able to open the file.");
    return 0;
    }

    int indexArray = 0;
    int workingArray[NUMBEROFCOLS*NUMBEROFROWS];
    char c;
    char d;

    while (1)
    {
        c = fgetc(fptr);
        d = fgetc(fptr);//works only for 2 digit numbers; the leading 0 can be handled
        workingArray[indexArray] = getInt(c, d);
        ++indexArray;

        if ((c = fgetc(fptr)) == EOF) //spaces; \n; EOF
        {
            break;
        }
    }

    for (int i = 0; i<NUMBEROFROWS; ++i)
    {
        for(int j = 0; j < NUMBEROFCOLS; ++j)
        {
            printf("%d ", workingArray[i*NUMBEROFCOLS+j]);
        }
            printf("\n");
    }


    fclose(fptr);
    return 1;
}


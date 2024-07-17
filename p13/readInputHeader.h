#include <stdio.h>

int firstTenDigitsFunc(int sumArray[], int lengthOfSum)
{
    int firstTenDigits = 0;
    FILE* ftpr;
    ftpr = fopen("p13inputs.txt", "r");

    if(ftpr == NULL)
    {
        printf("Not able to open the file.");
        exit(0);
    }

    char c;
    for(int i = 0; i < NUMOFROWS; ++i)
    {
        for(int j = 0; j < NUMOFDIGITS; ++j)
        {
            c = fgetc(ftpr);
            
        }
        fgetc(ftpr);//'\n's and EOF
    }

    
}
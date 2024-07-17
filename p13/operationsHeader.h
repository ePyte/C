#include <stdio.h>

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

void addDigitToArray(int j, char c, int sumArray[])
{
    int digit = nextDigit(c);
    int index = NUMOFDIGITS - j-1; //numbers are kept from "left to right"
    int digitInArray = sumArray[index];
    
    while((digitInArray + digit) >= 10)
    {
        sumArray[index] = ((digitInArray + digit) % 10);
        digit = 1;
        ++index;
        digitInArray = sumArray[index];
    }

}

int getTopTenDigitsFunc(int sumArray[], int lengthOfSum)
{
    int topTenDigitNumber = 0;
    int counter = 0;
    for(int i = lengthOfSum-1; i >=0; --i)
    {
        if(counter> lengthOfSum - 1)
        {
            return topTenDigitNumber;
        }

        if((sumArray[i] != 0) && counter == 0)//getFirstDigit
        {
            topTenDigitNumber = sumArray[i];
            ++counter;
        }

        if( counter > 0)
        {
            topTenDigitNumber = topTenDigitNumber * 10 + sumArray[i];
            ++counter;
        }
    }
}
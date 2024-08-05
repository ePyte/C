#ifndef OPERATIONSHEADER_H
#define OPERATIONSHEADER_H

void initArray(int inputsArray[])
{
    inputsArray[0] = JAN;
    inputsArray[1] = FEB_NOT_LEAP;
    inputsArray[2] = MAR;
    inputsArray[3] = APR;
    inputsArray[4] = MAY;
    inputsArray[5] = JUN;
    inputsArray[6] = JUL;
    inputsArray[7] = AUG;
    inputsArray[8] = SEP;
    inputsArray[9] = OCT;
    inputsArray[10] = NOV;
    inputsArray[11] = DEC;
}

int countMondays(int firstDay, int arrayMonthLengths[])
{
    int sumOfMondaysOnFirst = 0;
    for(int i = STARTYEAR; i <= ENDYEAR; ++i)
    {
        for(int j = 0; 0 < NUMBEROFMONTHS; ++j)
        {
            firstDay += arrayMonthLengths[i];
            firstDay %= NUMBEROFDAYSPERWEEK;
            if(firstDay == 1)
            {
                ++sumOfMondaysOnFirst;
            }
        }
    }
    return sumOfMondaysOnFirst;
}
#endif
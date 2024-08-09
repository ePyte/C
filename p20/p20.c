#include <stdio.h>
#include <stdlib.h>

#define STARTINDEX 0
#define SIZESTEP 8
#define FACTLOWLIMIT 1
#define FACTUPLIMIT 5
#define SPACELIMIT 4

#include "initArrayOperationsHeader.h"
#include "multiplicationsHeader.h"
#include "sumHeader.h"

int main()
{
    int* mulArray = (int*) malloc(SIZESTEP * sizeof(int));
    if(mulArray == NULL)
    {
        printf("Error: memory allocation has failed.");
        return 0;
    }


    int startIndex = STARTINDEX;
    int endIndex = SIZESTEP;


    initValArray(mulArray, startIndex, endIndex);
    /*
    for(int i = startIndex; i < endIndex; ++i)
    {
        printf("%d\n", *(mulArray + i));
    }
    printf("%d\n", startIndex);
    printf("%d\n", endIndex);
*/

    int result = factorialDigitsSum(&mulArray, &startIndex, &endIndex);
    printf("%d\n", result);
    free(mulArray);
    
    return 1;
}
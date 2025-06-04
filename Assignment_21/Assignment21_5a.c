#include <stdio.h>
#include<stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    int iNum = 0;

    if ((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = 0;
        iNum = Arr[iCnt];  // store in a temp variable

        while (iNum != 0)
        {
            iDigit = iNum % 10;
            iSum += iDigit;
            iNum /= 10;
        }

        printf("%d\t", iSum);
    }
}


int main()
{
    int iLength = 0;
    int *iptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of value you want.\n");
    scanf("%d",&iLength);

    iptr = (int *)malloc(iLength * (sizeof(int)));
    
    if(iptr == NULL)
    {
        printf("Unable to allocate the memory.");
        return -1;
    }

    printf("Enter the numbers one by one.\n ");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("Enter number %d:  ",iCnt+1);
        scanf("%d",&iptr[iCnt]);
    }

    DigitsSum(iptr,iLength);

    free(iptr);

    return 0;
}
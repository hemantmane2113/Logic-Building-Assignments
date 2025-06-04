#include <stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    //int iNum = 0;

    if((Arr == NULL)|| (iSize <= 0))
    {
        printf("Invalid input\n");
        return;
    }
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        iDigit = Arr[iCnt] % 10;

        if(iDigit == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }

        Arr[iCnt] = Arr[iCnt] / 10;
        
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

    Digits(iptr,iLength);

    free(iptr);

    return 0;
}
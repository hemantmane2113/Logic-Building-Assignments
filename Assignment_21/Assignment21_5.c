#include <stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iSize)
{   
    int iNum = 0;
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iCounter = 0;
    int iDigit = 0;
    int iSum  = 0;

    if((Arr == NULL)|| (iSize <= 0))
    {
        printf("Invalid input\n");
        return;
    }

    
    for(iCnt1 = 0;iCnt1 < iSize;iCnt1++)
    {    
        iNum = Arr[iCnt1];

        while(iNum != 0)
        {
            iNum = iNum / 10;

            iCounter++;
        }

        for(iCnt2 = 1;iCnt2 <=iCounter;iCnt2++)
        {
            iDigit = Arr[iCnt1] % 10;

            iSum = iSum + iDigit;

            Arr[iCnt1] = Arr[iCnt1] / 10;// the value of Arr[iCnt1] ultimately gets modified
            // to 0 and will be saved as 0 in array.
            // see the next code which is improved version of this code.

              
        }
        printf("%d\t",iSum);
        iCounter = 0;
        iSum = 0;
         
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
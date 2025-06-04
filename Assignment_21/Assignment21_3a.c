#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iDiff = 0;
    

    if((Arr == NULL)|| (iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] >= iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] <= iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    iDiff = iMax - iMin;
    return iDiff;
  
}

int main()
{
    int iLength = 0;
    int *iptr = NULL;
    int iCnt = 0;
    int iValue = 0;
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
    iRet = Difference(iptr,iLength);
    printf("The difference is: %d\n",iRet);

    return 0;
}
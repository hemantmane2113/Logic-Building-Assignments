#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iDiff = 0;
    

    if((Arr == NULL)|| (iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }
    
    for(iCnt1 = 0;iCnt1 < iSize;iCnt1++)
    {
        if(Arr[iCnt1] >= iMax)
        {
            iMax = Arr[iCnt1];
        }
        
    }
    
    for(iCnt2 = 0; iCnt2 < iSize;iCnt2++)
    {
        if(Arr[iCnt2] <= iMin)
        {
            iMin = Arr[iCnt2];
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
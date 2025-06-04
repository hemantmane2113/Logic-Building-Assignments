#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEvenCounter =0;
    int iOddCounter = 0;
    int iDiff = 0;


    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCounter = iEvenCounter + 1;
        }
        else
        {
            iOddCounter = iOddCounter + 1;
        }
        
    }
    iDiff = iEvenCounter - iOddCounter;
    return iDiff;
}

int main()
{
    int *iptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iLength = 0;

    printf("Enter the number of elements you want to enter: \n");
    scanf("%d",&iLength);

    iptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == iptr)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }
    printf("Enter the %d numbers one by one \n",iLength);

    for(iCnt = 0 ;iCnt < iLength;iCnt++)
    {
        printf("Enter number %d: ",iCnt+1);
        scanf("%d",&iptr[iCnt]);
    }
    iRet = Frequency(iptr,iLength);
    printf("Result is %d\n",iRet);

    free(iptr);
    return 0;
}
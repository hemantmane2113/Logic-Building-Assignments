#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt = 0;
    int iCounter =0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCounter = iCounter + 1;
        }
        
    }
    return iCounter;
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
    iRet = CountEven(iptr,iLength);
    printf("Result is %d\n",iRet);

    free(iptr);
    return 0;
}
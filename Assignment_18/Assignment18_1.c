# include <stdio.h>
# include <stdlib.h>

int Difference(int Arr[],int iSize)
{   
    int iEvenSum = 0;
    int iOddSum = 0;
    int iCnt = 0;
    int iDiff = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }

    }
    iDiff = iEvenSum - iOddSum;
    return iDiff;

}

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iCnt = 0;
    int *iptr = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&iLength);

    iptr = (int *)malloc(iLength * sizeof(int));

    if(iptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements one by one: \n");

    for(iCnt  = 0;iCnt < iLength;iCnt++)
    {
        printf("Enter the %d number: ",iCnt+1);
        scanf("%d",&iptr[iCnt]);
    }

    iRet = Difference(iptr,iLength);

    printf("Result is %d\n",iRet);

    free(iptr);

    return 0;

}
#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[],int iSize)
{
    int iCnt = 0;
    int iProd = 1;
    int iCount = 0;

    if((Arr == NULL)||(iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }
    for(iCnt = 0 ; iCnt < iSize;iCnt++)// to see if all numbers are even
    {
       if(Arr[iCnt] % 2 == 0) 
        {
            iCount++;
        } 
    }
    if(iCount == iSize)// if all numbers are even we are asked to  return 0 and not 1
    {
        return 0;
    }

    for(iCnt = 0 ; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 == 1) 
        {
            iProd = iProd * Arr[iCnt];
        }
        
    }
    return iProd;

}

int main()
{
    int *iptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iLength = 0;
    int iRet = 0;

    printf("Enter the number of elements you want in a list: \n");
    scanf("%d",&iLength);
    
    iptr = (int *)malloc(iLength * sizeof(int));

    if(NULL ==  iptr)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d numbers one by one: \n",iLength);
    for(iCnt  = 0;iCnt < iLength;iCnt++)
    {
        printf("Enter number: %d ",iCnt+1);
        scanf("%d",&iptr[iCnt]);
    }
    
    iRet = Product(iptr,iLength);
    
    printf("The multiplication of the odd numbers is %d",iRet);

    free(iptr);

    return 0;
}    
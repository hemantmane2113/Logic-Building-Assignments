#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt = 0;

    if((Arr == NULL)||(iSize <= 0))
    {
        printf("Invalid input\n");
        return;
    }
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

}

int main()
{
    int iLength = 0;
    int *iptr = NULL;
    int iValue1 = 0;
    int iValue2 = 0;
    int iCnt = 0;
    

    printf("Enter the number of elements: \n");
    scanf("%d",&iLength);

    iptr = (int *)malloc(iLength *(sizeof(int)));

    if(NULL  == iptr)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d numbers one by one: \n",iLength);
    for(iCnt  = 0;iCnt < iLength;iCnt++)
    {
        printf("Enter number: %d ,",iCnt+1);
        scanf("%d",&iptr[iCnt]);
    }

    printf("Enter the first number from the range: \n");
    scanf("%d",&iValue1);

    printf("Enter the last number from the range: \n");
    scanf("%d",&iValue2);

    Range(iptr,iLength,iValue1,iValue2);

    return 0;

}
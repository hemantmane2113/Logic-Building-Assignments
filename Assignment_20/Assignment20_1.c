#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    if((Arr == NULL)||(iLength <= 0))
    {
        printf("Invalid input\n");
        return false;
    }
    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
    }
    return false;


}

int main()
{
    int *iptr = NULL;
    int iCnt = 0;
    bool bRet = false;
    int iValue = 0;
    int iLength = 0;

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
    printf("Choose number from the list: ");
    scanf("%d",&iValue);

    bRet = Check(iptr,iLength,iValue);
    
    if(bRet == true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is absent",iValue);
    }

    free(iptr);

    return 0;
}    
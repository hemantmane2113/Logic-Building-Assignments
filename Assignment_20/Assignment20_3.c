#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;

    if((Arr == NULL)||(iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }
    for(iCnt = iSize ; iCnt >= 0;iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;


}

int main()
{
    int *iptr = NULL;
    int iCnt = 0;
    int iRet = -1;
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
    printf("Choose number from the list: ");
    scanf("%d",&iValue);

    iRet = LastOcc(iptr,iLength,iValue);
    
    printf("The index of the number is %d",iRet);

    free(iptr);

    return 0;
}    
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iSize)
{
    int iCnt = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return false;
    }
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt]  == 11)
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
    bRet = Check(iptr,iLength);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else          
    {
        printf("11 is absent");  
    }
    

    free(iptr);
    return 0;
}
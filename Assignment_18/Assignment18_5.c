#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    if((Arr == NULL)|| (iSize < 0))
    {
        printf("Invalid input\n");
        return;

    }
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d\t \n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iCnt = 0;
    int *iptr = NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iLength);

    iptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == iptr)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter the numbers one by one: \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&iptr[iCnt]);
    }

    Display(iptr,iLength);

    return 0;

}

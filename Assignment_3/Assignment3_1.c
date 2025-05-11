#include <stdio.h>

void PrintEven(int iNo)
{
    int iEven = 2;
    int iCnt = 0;
    if(iNo < 0)
    {
        return;
    }
    else 
    {
        for(iCnt = 1;iCnt <= iNo;iCnt++)
        {
            printf("%d ",iEven * iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}
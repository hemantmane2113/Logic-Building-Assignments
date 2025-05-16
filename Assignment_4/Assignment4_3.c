// Write a program which accept number from user and display all of its non factors
# include <stdio.h>

void NonFact(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d ",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;

}
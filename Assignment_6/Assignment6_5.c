// Write a program which accept number from user and display its table in reverse order

# include <stdio.h>
int Table(int iNo)
{
    int iCnt = 0;
    for (iCnt = 10;iCnt >= 1;iCnt--)
    {
        printf("%d  ",iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}


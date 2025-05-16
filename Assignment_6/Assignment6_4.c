//Write a program which accepts number from user and displays its table

# include <stdio.h>
int Table(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1;iCnt<=10;iCnt++)
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
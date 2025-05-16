// Write a program which accept N and print first 5 multiples of N.

# include <stdio.h>
void MultipleDisplay(int iNo)
{
    if (iNo < 0)
    iNo = -iNo;
     
    int iCnt = 0; 

    for (iCnt = 1;iCnt <= 5;iCnt++)
    {
        printf("%d  ",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
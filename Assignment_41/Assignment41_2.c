#include<stdio.h>

void Display(int number)
{
    static int iCnt = 1;
    while(iCnt <= number)
    {
        printf(" %d ",iCnt);
        iCnt++;

        Display(number);
    }
}

int main()
{
    int num = 0;
    printf("Enter the number upto which you want to print the number:\n");
    scanf("%d",&num);

    Display(num);

    return 0;
}

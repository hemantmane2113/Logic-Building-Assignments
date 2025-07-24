#include<stdio.h>

void Display(int num)
{
    static int iCnt = 1;
    static char letter  = 'a';

    while(iCnt <= num)
    {
        printf(" %c ",letter);
        iCnt++;
        letter++;
        Display(num);
        break;
    }
}

int main()
{
    int num = 0;
    printf("Enter how many letters you want to print from a:\n");
    scanf("%d",&num);

    Display(num);

    return 0;
}

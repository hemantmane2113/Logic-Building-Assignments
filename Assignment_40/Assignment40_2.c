#include<stdio.h>

void Display()
{
    static int iCnt = 1;
    while(iCnt <= 5)
    {
        printf(" %d ",iCnt);
        iCnt++;

        Display();
    }
}

int main()
{
    Display();

    return 0;
}

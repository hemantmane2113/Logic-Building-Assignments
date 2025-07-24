#include<stdio.h>

void Display()
{
    static int iCnt = 1;
    static char letter  = 'a';

    while(iCnt <= 5)
    {
        printf(" %c ",letter);
        iCnt++;
        letter++;
        Display();
        break;
    }
}

int main()
{

    Display();

    return 0;
}

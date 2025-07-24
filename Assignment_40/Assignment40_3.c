#include<stdio.h>

void Display()
{   
    static int iCnt = 5;
    if(iCnt > 0)
    {
        printf(" %d ",iCnt);
        iCnt--;

        Display();
    }
}

int main()
{
    Display();

    return 0;
}

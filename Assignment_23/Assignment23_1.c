#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    for(iCnt = 0;iCnt <= 127;iCnt++)
    {
        printf("%c\n",iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
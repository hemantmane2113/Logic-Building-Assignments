#include<stdio.h>

int Reverse(int iNo)
{
    static int iDigit = 0;
    static int iRevNum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iRevNum = iRevNum * 10 + iDigit;

        iNo = iNo / 10;

        Reverse(iNo);

        break;
    }
    return iRevNum;
}

int main()
{
    int iRet = 0;

    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("The reverse number of %d is %d\n",iValue,iRet);

    return 0;
}
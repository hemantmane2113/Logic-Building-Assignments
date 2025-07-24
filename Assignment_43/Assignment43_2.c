#include<stdio.h>

int Max(int iNo)
{
    static int iMax = 0;
    static int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;

        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iRet = 0;

    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("The larget digit in the number %d is %d\n",iValue,iRet);

    return 0;
}
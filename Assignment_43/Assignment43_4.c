#include<stdio.h>

int Min(int iNo)
{
    
    static int iDigit = 0;
    static int iMin = 9;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;

        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iRet = 0;

    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("The smallest digit in the number %d is %d\n",iValue,iRet);

    return 0;
}
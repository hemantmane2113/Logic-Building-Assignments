#include<stdio.h>


int Sum(int iNo)
{
    static int iDigit = 0;
    static int iSum = 0;

    while(iNo != 0)
    {
        
        iDigit = iNo % 10;

        iSum = iSum + iDigit;

        iNo = iNo / 10;
        
        Sum(iNo);

        break;
    }
 
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of which you need a sum of digits: ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("The sum of digits of  %d is %d",iValue,iRet);

    return 0;
}
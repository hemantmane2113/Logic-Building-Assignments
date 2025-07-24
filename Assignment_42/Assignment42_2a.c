#include<stdio.h>


int Sum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo == 0)
    {
        return 0;
    }
    
    iDigit = iNo % 10;

    iSum = Sum(iNo/10);

    iSum = iSum + iDigit;
 
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
#include<stdio.h>


int Mult(int iNo)
{
    static int iDigit = 0;
    static int iMult = 1;

    while(iNo != 0)
    {
        
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;
        
        Mult(iNo);

        break;
    }
 
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of which you need a product of digits: ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("The products of digits of  %d is %d \n",iValue,iRet);

    return 0;
}
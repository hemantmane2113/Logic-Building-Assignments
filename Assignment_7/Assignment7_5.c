// Write a program which returns difference between Even Factorial and Odd Factorial of 
//a given number

#include <stdio.h>

int FactorialDiff(int iNo)
{   
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;
    int iEvenOddFactDiff = 0;

    for (iCnt = 1;iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt; 
        }
        else
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    iEvenOddFactDiff = iEvenFact - iOddFact;
    return iEvenOddFactDiff;
}



int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial difference of number is %d",iRet);

     return 0;

}
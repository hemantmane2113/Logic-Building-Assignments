// Write a program to find even factorial of given number

#include <stdio.h>

int EvenFactorial(int iNo)
{   
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iEvenFact = 1;

    for (iCnt = 1;iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt; 
        }
    }
    return iEvenFact;
}



int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even factorial of number is %d",iRet);

     return 0;
}
// Write a code to find a odd factorial of a given number


#include <stdio.h>

int OddFactorial(int iNo)
{   
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iOddFact = 1;

    for (iCnt = 1;iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt; 
        }
    }
    return iOddFact;
}



int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd factorial of number is %d",iRet);

     return 0;

}
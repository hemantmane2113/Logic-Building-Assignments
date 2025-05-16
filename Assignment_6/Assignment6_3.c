// Write a program to find a factorial of a given number

# include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    
    for (iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is: %d",iRet);

    return 0;
}
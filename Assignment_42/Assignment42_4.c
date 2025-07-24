#include<stdio.h>


int Fact(int iNo)
{
    
    static int iFact = 1;

    while(iNo > 1)
    {
        

        iFact = iFact * iNo;

        iNo--;
        
        Fact(iNo);

        break;
    }
 
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of which you need factorial: ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("The factorial of  %d is %d \n",iValue,iRet);

    return 0;
}
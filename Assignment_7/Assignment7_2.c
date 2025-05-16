//Accept amount in US dollar and return its corresponding value in Indian currency
//Consider 1$ as 70 Rs/-

# include <stdio.h>

int DollarToINR(int iNo)
{
   int iDollar = 1;
   int iRupee = 70;
   
    if(iDollar = iNo)
    {
        iRupee = iRupee * iDollar;
    }
    return iRupee;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number of USD: \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

     return 0;
}
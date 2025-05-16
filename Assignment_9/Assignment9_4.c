// Write a program which accept number from user and count frequency of 4 in it

# include <stdio.h>

int CountFour(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iTwoFreq = 0;
    
    while (iNo > 0 )
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
        {
            iTwoFreq++;
        }
        
        iNo = iNo / 10;
        
    }
    return iTwoFreq;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}
// Write a program which accept number from user and count frequency of 2 in it

# include <stdio.h>

int CountTwo(int iNo)
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
        if (iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}
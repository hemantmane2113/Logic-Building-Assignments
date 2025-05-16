// Write a program which accept number from user and count frequency of such digits which are less
// less than 6

# include <stdio.h>

int Count(int iNo)
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
        if (iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}
// Write a program which accept number from user and check whether it contains 0 in it or not

# include <stdio.h>
# include <stdbool.h>

bool ChkZero(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo; 
    }

    int iDigit = 0;

    while(iNo > 0)
    {
       iDigit = iNo % 10;
       
       if(iDigit == 0)
       {
        return true;
       }
      else
       {
        iNo = iNo / 10;
       }
    }  
    return false;
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;

}
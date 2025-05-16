// Write a program which accept number from user and return multiplication of all digits

# include <stdio.h>

int MultiDigits(int iNo)
{
  if (iNo < 0)
  {
    iNo = -iNo;
  }

  int iDigit = 0;
  int iMulti = 1;
  while (iNo > 0)
  {
    iDigit = iNo % 10;
    if (iDigit > 0)
    {
        iMulti = iMulti * iDigit;
    }
   
    iNo = iNo / 10;
  }
  return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}

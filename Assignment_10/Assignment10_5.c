// Write a program which accept number from user and return difference between summation
// of even digits and summation of odd digits

# include <stdio.h>

int CountDiff(int iNo)
{
  if (iNo < 0)
  {
    iNo = -iNo;
  }
  int iDigit = 0;
  int iEvenDigitSum = 0;
  int iOddDigitSum = 0;
  int iEvenOddDiff = 0;
  while (iNo > 0)
  {
    iDigit = iNo % 10;
    if (iDigit % 2 == 0)
    {
        iEvenDigitSum = iEvenDigitSum + iDigit;
    }
    else
    {
        iOddDigitSum = iOddDigitSum + iDigit;
    }
   
    iNo = iNo / 10;
  }
  iEvenOddDiff = iEvenDigitSum - iOddDigitSum;
  return iEvenOddDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}

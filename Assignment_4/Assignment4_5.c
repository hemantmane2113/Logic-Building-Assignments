// Write a program which accept number from user and return difference between summation of all
//its factors and non factors


# include <stdio.h>

int FactDiff(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iNonFactSum = 0;
    int iFactSum = 0;
    int iFactNonFactDiff = 0;
    
    for(iCnt = 1; iCnt < iNo;iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else 
        {
            iNonFactSum = iNonFactSum + iCnt;
        }

    }
    iFactNonFactDiff =  iFactSum - iNonFactSum;
    return iFactNonFactDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;

}
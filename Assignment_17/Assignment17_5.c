#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iCount = 0;

    for(iCnt1 = 1;iCnt1 <= iRow;iCnt1++)
    {
        for(iCnt2 = 1,iCount = 1;iCnt2 <= iCol;iCnt2++,iCount++)
        {
            if(((iCnt1 ==1)&&(iCnt1 < iCnt2))||((iCnt1 == iRow)&&(iCnt1 > iCnt2))||((iCnt2 == 1)&&(iCnt2 < iCnt1))||((iCnt2 == iCol)&&(iCnt2 > iCnt1))||(iCnt1 == iCnt2))
            {
                printf("%d\t",iCount);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter total number or rows and columns: \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
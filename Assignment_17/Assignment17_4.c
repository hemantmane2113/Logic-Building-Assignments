# include<stdio.h>


void Pattern(int iRow,int iCol)
{
    
    int iCnt1 = 0;
    int iCnt2 = 0;
    
    for(iCnt1 = 1;iCnt1 <= iRow;iCnt1++)
    {
        for(iCnt2 = iCol;iCnt2 >= 1;iCnt2--)
        {
            if( ((iCnt1 == 1) && (iCnt1 < iCnt2)) || ((iCnt1 == iRow)&&(iCnt1 > iCnt2))||((iCnt2 == 1)&&(iCnt2 < iCnt1)||((iCnt2 == iCol)&&(iCnt2 > iCnt1))||(iCnt1 == iCnt2)))
            {
                printf("*\t");
            }
            else if(iCnt2 > iCnt1)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");   
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
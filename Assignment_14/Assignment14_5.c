# include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;
    
    for(i = 1;i <= iRow;i++)
    {
        for(j = 1;j <= iCol;j++,iCnt++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
        iCnt = iCnt - 3;   
    }   
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
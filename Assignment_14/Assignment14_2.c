# include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1;j <= iCol;j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iCnt);
                iCnt = iCnt + 2;
            }
            else
            {
                printf("%d\t",iCnt+1);
                iCnt = iCnt + 2;
            }
            
        }
        printf("\n");
        iCnt = 1;
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
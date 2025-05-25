# include <stdio.h>

void Pattern (int iRow,int iCol)
{
  int i = 0;
  int j = 0;
  int iCnt = 1;
  
  for(i = 1;i <= iRow;i++)
  {
    for(j = 1,iCnt = 1;j <= iCol;j++,iCnt++)
    {
        if(( (j == 1) && (i >= j) ) || ((i == iRow) || (j == iCol))|| ((i ==1) && (i <= j)))
        {
            printf("%d\t",iCnt);
        }
        else
        {
            printf("*\t");
        }
    }
    printf("\n");
  }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
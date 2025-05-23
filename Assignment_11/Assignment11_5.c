# include <stdio.h>


void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= iNo*2;iCnt++)
    {//for(iCnt = 2;iCnt <= iNo*2;iCnt += 2)can also be written,then if statement becomes redundant
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
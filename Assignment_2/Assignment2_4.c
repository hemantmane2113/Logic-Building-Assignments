# include <stdio.h>
 void Display(int iNo,int iFrequency)
 {
    int iCnt = 0;

    for(iCnt =1;iCnt <= iFrequency;iCnt++)
    {
        printf("%d",iNo);
    }

 }

 int main()
 {
    int iValue = 0;
    int iCounter = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&iCounter);

    Display(iValue,iCounter);

    return 0;
 }

// Accept single digit number from user and print it into word

# include <stdio.h>

void Display(int iValue)
{
    char *names[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if (iValue < 0)
    {
        iValue = -iValue;
    }

    if ((iValue >= 0) && (iValue <= 9))
    {
        printf("%s",names[iValue]);//%s for string
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;
     printf("Enter the number: \n");
     scanf("%d",&iValue);

     Display(iValue);

     return 0;
}
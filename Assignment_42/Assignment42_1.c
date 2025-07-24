#include<stdio.h>

void Display(int number)
{
    if(number > 0)
    {
        printf(" %d  * ",number);
        number--;

        Display(number);
    }
}

int main()
{
    int num = 0;
    printf("Enter the number from which you want to print the number:\n");
    scanf("%d",&num);

    Display(num);

    return 0;
}

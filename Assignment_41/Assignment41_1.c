#include<stdio.h>

void Display(int number)
{

    if(number > 0)
    {
        printf(" * ");
        number--;

        Display(number);
    }
    printf("\n");
}

int main()
{
    int num = 0;
    printf("Enter the number as how many times you want to print '*' :\n");
    scanf("%d",&num);

    Display(num);

    return 0;
}

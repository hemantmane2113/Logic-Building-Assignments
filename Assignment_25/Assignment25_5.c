#include <stdio.h>

void CountWhite(char *str)
{   
    int iCounter = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCounter++;  
        }
        str++;
    }
    printf("%d\n",iCounter);
}

int main()
{
    char arr[20];

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    CountWhite(arr);

    return 0;

}
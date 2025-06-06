#include <stdio.h>

void DisplayDigit(char *str)
{   
    int iCnt = 0;
    while(*str != '\0')
    {
        if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
        {
            printf("%c",str[iCnt]);
            
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;

}
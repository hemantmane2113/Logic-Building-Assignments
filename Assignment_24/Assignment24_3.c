#include <stdio.h>

int Difference(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;

    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCount1++;  
        }
        else if((*str >= 'A')&&(*str <= 'Z'))
        {
            iCount2++;  
        }

        str++;
    }
    return (iCount1 - iCount2);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("The differnce between total number of capital letters and small letters is: %d \n", iRet);

    return 0;
}
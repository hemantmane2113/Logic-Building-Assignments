#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool ChkChar(char *str,char ch)
{
    while(*str != '\0')
    {
        if((*str == tolower(ch)) || (*str == toupper(ch)))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in %s",cValue,arr);
    }
    else
    {
        printf("%c is not present in %s",cValue,arr);
    }

    return 0;

}
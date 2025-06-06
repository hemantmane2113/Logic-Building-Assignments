#include <stdio.h>
#include <ctype.h>

int CountChar(char *str,char ch)
{   
    int iCounter = 0;
    while(*str != '\0')
    {
        if((*str == tolower(ch)) || (*str == toupper(ch)))
        {
            iCounter++;
        }
        str++;
    }
    return iCounter;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);
    // The space skips any leftover whitespace from previous input (including newline) in the input buffer.
    iRet = CountChar(arr,cValue);

    printf("The %c occured %d times in %s",cValue,iRet,arr);

    
    return 0;

}
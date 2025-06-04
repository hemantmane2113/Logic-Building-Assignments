#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool ChkVowel(char *str)
{   
    char ch = toupper(*str);
    while(*str != '\0')
    {
        if((ch == 'A')||(ch <= 'E')||(ch == 'I')||(ch <= 'O')||(ch <= 'U'))
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
    bool bRet = false;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("%s contains vowel\n",arr);
    }
    else
    {
        printf("%s does not contain vowel\n",arr);
    }

    return 0;
}
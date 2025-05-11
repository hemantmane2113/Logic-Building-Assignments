#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char Ch)
{
    if((Ch == 'a') || (Ch == 'e')||(Ch == 'i')||(Ch == 'o')||(Ch == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("Character is a vowel");
    }
    else
    {
        printf("Character is NOT vowel");
    }

    return 0;
}

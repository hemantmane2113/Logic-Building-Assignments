# include <stdio.h>
# include <ctype.h>

void DisplayConvert(char CValue)
{
    if (isupper(CValue))
    {
        printf("%c\n",tolower(CValue));
    }
    else if (islower(CValue))
    {
        printf("%c\n",toupper(CValue));
    }
    else
    {
        printf("Character is not an alphabet letter.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
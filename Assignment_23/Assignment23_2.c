#include <stdio.h>
#include <ctype.h>

void Display(char ch)
{
    if(isupper(ch))
    {
        printf("%c\n",tolower(ch));
    }
    else if(islower(ch))
    {
        printf("%c\n",toupper(ch));
    }
    else 
    {
        printf("%c\n",ch);
    }
    
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character: \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
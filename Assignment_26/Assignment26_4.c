#include <stdio.h>
#include <ctype.h>

int LastChar(char *str,char ch)
{   
    int iCounter = 0;
    int iCnt = 0;
    char *cptr = str;

    while(*cptr != '\0')
    {
        iCounter++;
        cptr++;
    }
    
    for(iCnt = iCounter;iCnt >= 0;iCnt --)
    {
        if((str[iCnt] == tolower(ch)) || (str[iCnt] == toupper(ch)))
        {
            return iCnt;
        }
        
    }
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
    iRet = LastChar(arr,cValue);

    printf("Character location is:  %d",iRet);

    
    return 0;

}
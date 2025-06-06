#include <stdio.h>
#include <ctype.h>

void ReverseChar(char *str)
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

        printf("%c",str[iCnt]);
    }
}

int main()
{
    char arr[20];
    char cValue;
    char cRet = '\0';

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

   
    ReverseChar(arr);

    
    return 0;

}
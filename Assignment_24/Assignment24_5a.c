#include <stdio.h>

void Reverse(char *str)
{
   int iCnt = 0;
   int iCount = 0;
   
   while(*str != '\0')
   {
    iCount++;
    str++;
   }
   
   for(iCnt = iCount-1;iCnt >= 0;iCnt--)
   {
        printf("%c",str[iCnt]);
   }

}

int main()
{
    char arr[20];
    
    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}
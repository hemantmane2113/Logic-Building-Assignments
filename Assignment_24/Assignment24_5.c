#include <stdio.h>

void Reverse(char arr[])
{
   int iCnt = 0;
   int iCount = 0;
   while(arr[iCount] != '\0')
   {
    iCount++;// see how the iteration takes place
    // the pointer based increment and index based increment behave differntly...
    // compare this code with previous codes from this assignment
   }
   
   for(iCnt = iCount-1;iCnt >= 0;iCnt--)
   {
        printf("%c",arr[iCnt]);
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
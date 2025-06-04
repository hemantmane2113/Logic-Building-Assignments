#include <stdio.h>

void Reverse(char *str)
{
   int iCnt = 0;
   int iCount = 0;
   char *cptr = str;// here the we have to initialize the new pointer because at the end of 
   //the loop the pointer will be pointing at the end of the string ie '\0'
   // So instead of new pointer if we would have used the original pointer,in the for loop 
   //instead of pointing at the first value the pointer will be pointing at the last value 
   // which will produce the undefined behaviour or garbage output..see(run) previous code
   while(*cptr != '\0')
   {
    iCount++;
    cptr++;
   }
   
   for(iCnt = iCount-1;iCnt >= 0;iCnt--)
   {
        printf("%c",str[iCnt]);//here the success of code depends on the value pointer str[iCnt]
        //is pointing at.
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
#include <stdio.h>
#include <stdbool.h>

void DisplaySchedule(char ch)
{
   if((ch == 'A')||(ch == 'a'))
   {
    printf("Your exam is at 7 AM.\n");
   }
   else if((ch == 'B')||(ch == 'b'))
   {
    printf("Your exam is at 8.30 AM.\n");
   }
   else if((ch == 'C')||(ch == 'c'))
   {
    printf("Your exam is at 9.20 AM.\n");
   }
   else if((ch == 'D')||(ch == 'd'))
   {
    printf("Your exam is at 10.30 AM.\n");
   }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your Division:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
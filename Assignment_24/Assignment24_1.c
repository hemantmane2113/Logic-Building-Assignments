#include <stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            iCount++;  
        }
        str++;     // *str--> get the current character
                   //  str++ --> move the pointer to next character
                   // *str++ --> get the current character and move to next character
                   // therefore *str++ is same as:
                                               // *str;
                                               // str++; 
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Total capital letters in  %s are: %d",arr,iRet);

    return 0;
}
// Important note:
//               Expression	      Meaning
//               *str	          Access value only
//               str++	          Move pointer only
//               *str++	          Access value then move pointer (common in loops)
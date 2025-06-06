#include <stdio.h>
#include<ctype.h>
#include <stdbool.h>

void strtoggle(char *str)
{   
    int iCnt = 0;
    int iCounter = 0;
    char *cptr = str;

    while(*cptr != '\0')
    {
        iCounter++;
        cptr++;
    }

    for(iCnt = 0;iCnt < iCounter;iCnt++)
    {
        if(isupper(str[iCnt]))// cannot write if(str[iCnt] == isupper(str[iCnt])) as 
        //isupper(str[iCnt]) returns int as output(1 if true and 0 if false)
        {
            str[iCnt] = tolower(str[iCnt]);
        }
        else if(islower(str[iCnt]))
        {
            str[iCnt] = toupper(str[iCnt]);
        }

    }

}

int main()
{
    char arr[20];

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    strtoggle(arr);

    printf("Modified string is: %s",arr);// the print statement is written here beacuse
    //when the function is called,in case of strings(here arr) string does to go the function
    //but the address of the string array.So even when the string gets modified and stored
    //in same variable,the address also remains the same.So when arr is accessed in printf
    //statement,the arr was not the old one but new.

    return 0;

}
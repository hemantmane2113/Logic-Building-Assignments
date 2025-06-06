#include <stdio.h>
#include<ctype.h>

void struprx(char *str)
{   
    while(*str != '\0')
    {
        *str = toupper(*str);//*str --> pointing to a current value(here first)
        str++;//move the pointer to next index
    }

}

int main()
{
    char arr[20];

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is: %s",arr);// the print statement is written here beacuse
    //when the function is called,in case of strings(here arr) string does to go the function
    //but the address of the string array.So even when the string gets modified and stored
    //in same variable,the address also remains the same.So when arr is accessed in printf
    //statement,the arr was not the old one but new.

    return 0;

}
#include <stdio.h>

void StrCatX(char *src,char *dest)
{   
    if((src == NULL)||(dest == NULL))
    {
        printf("Invalid Input\n");
    }
    
    while(*src != '\0')
    {
        src++;    //to bring the pointer at the end '\0' of marvellous multi os
    }

    while(*dest != '\0')
    {
        *src = *dest;// src starts adding characters from dest from position '\0'(of previous string)
        *src++;
        dest++;
    }

    *src = '\0';//after having Marvellous Multi OS Logic Building...the pointer points to nothing
    //the pointer *src is at the point after 'g' where there is nothing...so what we do is
    // give that point a value of '\0' which is at the end of evey string.This will terminate 
    //the string as well as if this string is accessed by other function, it will work properly
    //If string does not have '\0' at the end,it will generate errors.
    
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s\n",arr);

    return 0;

}
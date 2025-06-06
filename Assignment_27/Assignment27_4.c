#include <stdio.h>

void StrCpySmall(char *src,char *dest)
{
    if((src == NULL)||(src < 0))
    {
        printf("Invalid Input\n");
    }
    while(*src != 0)
    {
        if((*src >= 'a')&&(*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
        
    }
    printf("%s\n",dest);
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpySmall(arr,brr);

    printf("%s",brr);

    return 0;

}
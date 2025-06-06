#include <stdio.h>

void StrCpyCap(char *src,char *dest)
{
    if((src == NULL)||(src < 0))
    {
        printf("Invalid Input\n");
    }
    while(*src != 0)
    {
        if((*src >= 'A')&&(*src <= 'Z'))
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

    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;

}
#include <stdio.h>

void StrCpyX(char *src,char *dest)
{
    if((src == NULL)||(src < 0))
    {
        printf("Invalid Input\n");
    }
    while(*src != 0)
    {
        *dest = *src;
        src++;
        dest++;
    }
    printf("%s\n",dest);
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;

}
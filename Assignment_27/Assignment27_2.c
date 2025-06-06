#include <stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt)
{
    if((src == NULL)||(src < 0))
    {
        printf("Invalid Input\n");
    }
    while((*src != 0)&&(iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    printf("%s",dest);
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrNCpyX(arr,brr,10);

    printf("%s",brr);

    return 0;

}
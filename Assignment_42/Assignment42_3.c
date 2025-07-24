#include<stdio.h>


int Strlen(char *str)
{   
    static int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
        Strlen(str);
        break;
    }
    return iCnt;
}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter the string: ");
    scanf("%s",arr);

    iRet = Strlen(arr);
    printf("The number of letters in %s are %d \n",arr,iRet);

    return 0 ;
}
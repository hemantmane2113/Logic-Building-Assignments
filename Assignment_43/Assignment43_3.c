#include<stdio.h>


int Small(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCnt++;   
        }
        str++; 
        Small(str);      
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[50];

    printf("Enter the String: \n");
    scanf("%[^\n]s",Arr);

    iRet = Small(Arr);

    printf("Number of small characters in %s is %d: \n",Arr,iRet);
    return 0;
}
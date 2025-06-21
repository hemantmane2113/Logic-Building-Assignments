#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


void DisplayN(char Fname[],int iSize)
{   
    //char Buffer[1024] = {'\0'};  // ✅..allowed only for buffer with fix sizes.
    //char Buffer[iSize + 1] = {'\0'};  // ❌ not allowed

    //char Buffer[iSize+1] = {'\0'};wrong
    char Buffer[iSize+1];// 1 for null terminator ie '\0'
    int fd = 0;
    int iRet = 0;

    if(iSize < 0)
    {
        printf("Invalid size to read.\n");
        return;
    }
    
    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File is successfully opened with fd: %d\n",fd);

        iRet = read(fd,Buffer,iSize);

        if(iRet < 0)
        {
            printf("Unable to read the file.\n");
        }
        else
        {
            printf("The first %d characters from the file are: \n",iRet);
            fflush(stdout);  
            write(1,Buffer,iRet);
            memset(Buffer,'\0',iSize+1);
        }
    }
    close(fd);
     
}

int main()
{
    char FName[30];
    int iValue = 0;

    printf("Enter the name of the file: \n");
    scanf("%s",FName);

    printf("Enter the number of chararcters you want to read: \n");
    scanf(" %d",&iValue);


    DisplayN(FName,iValue);

    return 0;
}

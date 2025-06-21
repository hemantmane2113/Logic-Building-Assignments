#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024//user defined macro
int main()

{
    int fd = 0;
    char Fname[20] = {'\0'};
    int iRet = 0;
    char Buffer[BUFFER_SIZE] ={'\0'};
    int iCnt = 0;

    printf("Enter the name of the file you want to read: \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened with FD %d\n",fd);
    }
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            
            for(iCnt = 0;iCnt < iRet;iCnt++)
            {
                printf("%c",Buffer[iCnt]);
            }
            
            memset(Buffer,'\0',BUFFER_SIZE);//to clean the garbage
  
        }
    return 0;
}
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
    int iSize = 0;

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
            iSize = iSize+ iRet;
            memset(Buffer,'\0',BUFFER_SIZE);//to clean the garbage
        }
    printf("The size of file %s is %d bytes: ",Fname,iSize);
    close(fd);
    return 0;
}
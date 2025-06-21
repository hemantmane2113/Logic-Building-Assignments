#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024//user defined macro
int main()
{
    char Fname[20] = {'\0'};
    char WBuffer[] = "Thank you for reading the file.";
    char RBuffer[BUFFER_SIZE] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter the file name that you want to open: \n");
    scanf("%s",Fname);//array so np &
    

    fd = open(Fname,O_RDWR);// read + write

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File is successfully opened with fd: %d\n",fd);

        printf("The content of file %s is :\n ",Fname);
        fflush(stdout); 

        while((iRet = read(fd,RBuffer,BUFFER_SIZE)) != 0)
        {   
            write(1,RBuffer,iRet);
            memset(RBuffer,'\0',BUFFER_SIZE);//to clean the garbage
        }
         
        lseek(fd, 0, SEEK_END);
        iRet = write(fd,WBuffer,strlen(WBuffer));

        if(iRet > 0)
        {
            printf("\n\nContent is successfuly added at the end of the file.\n");
        }
        else
        {
            printf("\nFailed to add the content at the end of the file.\n");
        }
    }

    close(fd);

    return 0;

}
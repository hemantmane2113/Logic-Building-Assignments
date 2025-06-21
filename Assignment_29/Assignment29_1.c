#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int CountCapital(char Fname[])
{   
    
    char Buffer[BUFFER_SIZE] ={'\0'};
    int fd = 0;
    int iRet = 0;
    int iCnt = 0;
    int iCapCount = 0;

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File is successfully opened with fd: %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            
            for(iCnt = 0;iCnt < iRet;iCnt++)
            {
                if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCapCount++;
                }
                
            }            
            memset(Buffer,'\0',BUFFER_SIZE);//to clean the garbage
        }
    }
    close(fd);
    return iCapCount;
        

        
}

int main()
{
    char FName[30];
    int iRet = 0;

    printf("Enter the name of the file: \n");
    scanf("%s",FName);

    iRet = CountCapital(FName);
    printf("The number of capital letters in the file %s are %d ",FName,iRet);

    return 0;
}

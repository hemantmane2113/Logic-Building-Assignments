#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int CountSmall(char Fname[])
{   
    
    char Buffer[BUFFER_SIZE] ={'\0'};
    int fd = 0;
    int iRet = 0;
    int iCnt = 0;
    int iSmallCount = 0;

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
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iSmallCount++;
                }
                
            }            
            memset(Buffer,'\0',BUFFER_SIZE);//to clean the garbage
        }
    }
    close(fd);
    return iSmallCount;
        

        
}

int main()
{
    char FName[30];
    int iRet = 0;

    printf("Enter the name of the file: \n");
    scanf("%s",FName);

    iRet = CountSmall(FName);
    printf("The number of small letters in the file %s are %d ",FName,iRet);

    return 0;
}

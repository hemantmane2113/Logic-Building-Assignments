#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int CountLetter(char Fname[],char Ch)
{   
    
    char Buffer[BUFFER_SIZE] ={'\0'};
    int fd = 0;
    int iRet = 0;
    int iCnt = 0;
    int iLetterCount = 0;

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
                if(((Buffer[iCnt] == Ch) || (Buffer[iCnt] == Ch + 32))||((Buffer[iCnt] == Ch) || (Buffer[iCnt] == Ch - 32)))
                {
                    iLetterCount++;
                }
                
                
            }            
            memset(Buffer,'\0',BUFFER_SIZE);//to clean the garbage
        }
    }
    close(fd);
    return iLetterCount;
        
        
}

int main()
{
    char FName[30];
    int iRet = 0;
    char cValue;

    printf("Enter the name of the file: \n");
    scanf("%s",FName);

    printf("Enter the letter: \n");
    scanf(" %c",&cValue);


    iRet = CountLetter(FName,cValue);
    printf("The number of %c in the file %s are %d ",cValue,FName,iRet);

    return 0;
}

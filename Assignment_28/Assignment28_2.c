#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main()

{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of the file you want to create: \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777); 

    if(fd == -1)
    {
        printf("Unable to create a file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully created with FD %d\n",fd);
    }

    return 0;
}
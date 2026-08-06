
#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fname[20];
    int fd=0;
    printf("Please enter file name that you want to write \n");
    scanf("%s",&fname);
    fd=open(fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open  file \n");
    }
    else
    {
        write(fd,"Marvellous",10);
        printf("File successfully opened with %d",fd);
    }
    close(fd);
    return 0;
}

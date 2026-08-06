
#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fname[20];
    int fd=0;
    printf("Please enter file name that you want to create \n");
    scanf("%s",&fname);
    fd=creat(fname,0777);
    if(fd==-1)
    {
        printf("Unable to create  file \n");
    }
    else
    {
        printf("File successfully created with %d",fd);
    }
    return 0;
}

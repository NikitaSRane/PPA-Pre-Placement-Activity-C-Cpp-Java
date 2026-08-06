
#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fname[20];
    int fd=0;
    char data[10];

    printf("Please enter file name that you want to read \n");
    scanf("%s",&fname);
    fd=open(fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open  file \n");
        
    }
    else
    {
        read(fd,data,15);
        printf("Data from file is: %s ",data);
    }

    close(fd);
    return 0;
}

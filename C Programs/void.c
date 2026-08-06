#include<stdio.h>

int main()
{
    char c='M';
    float f=9.99;
    int i=80;
    double d=978.67;

    char *cp=&c;
    float *fp=&f;
    int *ip=&i;
    double *dp=&d;

    void *vp=&c;

    printf("Value of c is %c \n",c);
    printf("Address of c is %p \n",cp);
    printf("Data refer by c is %c \n",*cp);
    printf("Size of c is %d \n",sizeof(c));
    printf("Size of c is %d\n",sizeof(cp));
    
    //typecasting
    printf("Data refer by vp %c\n",*(char*)vp);
    vp=&i;
    printf("Data refer by vp %d\n",*(int*)vp);
    return 0;
}
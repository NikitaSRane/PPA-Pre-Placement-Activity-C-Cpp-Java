#include<stdio.h>

int main()
{
    
    int no1=10;
    int no2=20;
    int no3=30;

    int *p=NULL;
    p=&no1;

    printf("null pointer %d \n",*p);
    printf("Address of p is %d \n",p);

    p=&no2;
    printf("null pointer %d \n",*p);
    printf("Address of p is %d \n",p);

    return 0;
}
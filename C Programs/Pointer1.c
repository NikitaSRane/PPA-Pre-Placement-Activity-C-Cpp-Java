#include<stdio.h>

int main()
{
    int no=11;
    printf("Value of no is %d \n",no);
    printf("Size of no is %d bytes \n",sizeof(no));
    printf("Address of no in decimal is %d \n",&no);

    //pointer creation

    int *p=&no;
    printf("Value of pointer p is %d \n",*p);
    printf("Size of pointer p is %d\n",sizeof(p));
    printf("Address of p in decimal is %d \n",p); // address is == &no
    printf("Address of p in decimal is %d \n",&p); //address of pointer p

    return 0;
}
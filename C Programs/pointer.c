#include<stdio.h>

int main()
{
    int no=11;
    int *p=&no;

    char ch='A';
    char *q=&ch;

    printf("Interger pointer %d \n",*p);
    printf("Character pointer %c",*q);

    return 0;
}
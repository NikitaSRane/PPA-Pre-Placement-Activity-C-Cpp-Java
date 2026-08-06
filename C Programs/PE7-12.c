#include<stdio.h>

int main()
{
    extern int var=200;
    printf("Value of var is %d",var);
    return 0;
}
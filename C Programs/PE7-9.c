#include<stdio.h>

int main()
{
    extern int var;
    printf("Value of var is %d",var);
    return 0;
}

int var=200;
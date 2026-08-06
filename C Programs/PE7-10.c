#include<stdio.h>

int main()
{
    extern int var;
    printf("Value of var is %d",var);
    int var=200;
    return 0;
}
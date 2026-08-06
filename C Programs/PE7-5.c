#include<stdio.h>

int var=100;

int main()
{
    extern int var;
    extern int var;
    printf("Value of var in main is %d",var);
    return 0;
}
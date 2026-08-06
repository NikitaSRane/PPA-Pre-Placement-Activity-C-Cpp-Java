#include<stdio.h>

int var=100;

void fun()
{
    int var=50;
    printf("Value of var in fun is %d",var);
}

int main()
{
    printf("Value of var in main is %d \n",var);
    var=var+50;
    fun();
    return 0;
}
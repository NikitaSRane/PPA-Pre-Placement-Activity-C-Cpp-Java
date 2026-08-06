#include<stdio.h>

int var=100;

void fun()
{
    printf("Value of var in fun is %d \n",var);
}

int main()
{
    printf("The value of var in main is %d \n",var);
    var=var+200;
    fun();
    return 0;
}

#include<stdio.h>

void fun()
{
    int var=100;
    printf("Value of var in fun is %d \n",var);
}

int main()
{
    int var;
    printf("Value of var in main is %d\n",var); //garbage
    var=var+200;
    fun();
    return 0;
}
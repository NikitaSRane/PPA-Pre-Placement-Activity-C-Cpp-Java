#include<stdio.h>

void fun(int var)
{
    printf("Value of var in fun is %d",var);
}

int main()
{
    int var=100;
    printf("value of var in main is %d \n",var);
    fun(var/2);

    return 0;
}
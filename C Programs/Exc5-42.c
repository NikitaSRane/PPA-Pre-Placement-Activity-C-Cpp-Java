// compilation error due to void not return anything.
#include<stdio.h>

void fun(int a)
{
    printf("The value of a inside fun is %d",a);
}
int main()
{
    int a=10,b;
    b=fun(a);
    printf("Value of b after call to fun is %d",b);
}
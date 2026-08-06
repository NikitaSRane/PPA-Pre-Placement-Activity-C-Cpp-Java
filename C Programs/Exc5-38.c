#include<stdio.h>
int main()
{
    int add(int,int),a,b;

    a=b=10;
    printf("The result of addition is : %d",add(a,b));
}
int add(int a, int b)
{
    return a+b;
}
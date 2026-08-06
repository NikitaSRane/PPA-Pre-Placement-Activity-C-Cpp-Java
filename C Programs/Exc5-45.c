#include<stdio.h>
int add(int,int);

int main()
{
    int a=10,b=20,c;
    c=add(a,b);
    printf("Result after addition  is %d",c);
}
int add(int a,int b)
{
    a+b;
}
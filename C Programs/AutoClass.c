// Auto storage class

#include<stdio.h>

void Demo()
{
    auto int A=10;
    A++;  // increament value by one.
    printf("Value from demo is %d \n",A);
}

int main()
{
    Demo();
    Demo();
    return 0;
}
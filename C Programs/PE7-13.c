#include<stdio.h>

int a=200;

int main()
{
    int b=300;
    printf("values of outer block of main are %d %d",a,b);
    {
        int a=400;

        printf("values of inner block of main are %d %d",a,b);

    }
    printf("Values of back outer block of main are %d %d", a,b);

    return 0;
}
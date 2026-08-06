#include<stdio.h>
int main()
{
    float expr=2.0;
    switch(expr)
    {
        case 1:
            printf("One");
        case 2:
            printf("Two");
        default:
            printf("Default");
    }
    return 0;
}
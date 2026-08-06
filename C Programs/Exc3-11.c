#include<stdio.h>
int main()
{
    int expr=2;
    switch(expr)
    {
        case 1:
            printf("One");
        case 2+1:
            printf("Two");
        default:
            printf("Default");

    }
    return 0;
}
#include<stdio.h>
int main()
{
    int expr=2;
    switch(expr)
    {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            continue;
        default:
            printf("Default");

    }
    return 0;
}
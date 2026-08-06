#include<stdio.h>
int main()
{
    int expr=2;// j=1;
    switch(expr)
    {
        case 'j':
            printf("One");
        case 2:
            printf("Two");
        default:
            printf("Default");
    }
    return 0;
}
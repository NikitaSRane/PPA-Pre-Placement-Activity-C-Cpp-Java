#include<stdio.h>

int main()
{
    default:
        printf("This is default");

    goto default;
    return 0;
}
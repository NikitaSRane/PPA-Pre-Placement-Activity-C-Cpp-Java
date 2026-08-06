#include<stdio.h>

int main()
{
    int a=2;
    switch(a)
    {
        case 1:
            printf("This is case option \n");
            printf("Value of case1 is %d",a);
        case 2:
            printf("Value of case2 is %d",a);
        default:
            printf("Default value");
            
        case 3:
            printf("Value of case3 is %d",a);
    }
    return 0;
}
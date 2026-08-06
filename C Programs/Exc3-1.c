#include<stdio.h>

int a=10,b=20,c;

//c=a+b;

int main()
{
    c=a+b;
    printf("Value of c is %d",c);
    return 0;
}

//error due to misplace definition of line 5
//correct line 9
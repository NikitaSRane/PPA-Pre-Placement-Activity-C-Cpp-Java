#include<stdio.h>

extern int function();
extern int var;

int main()
{
    printf("Value of external var is %d",var);
    function(); 
}
#include<stdio.h>

int function();
int var=200;

int function()
{
    printf("ppppppppppppp");
}

int main()
{
    printf("Value of external var is %d",var);
    function(); 
}
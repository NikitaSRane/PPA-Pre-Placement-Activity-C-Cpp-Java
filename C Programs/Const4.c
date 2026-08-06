#include<stdio.h>

int main()
{
    const int no=11;
    const int *p=&no;

    no++; //NA

    p++; //Allowed
    no=11;//NA
    (*p)++;//NA
    
    return 0;
}
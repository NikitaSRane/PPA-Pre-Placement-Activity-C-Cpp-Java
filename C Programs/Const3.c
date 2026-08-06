#include<stdio.h>

int main()
{
    int no=11;
    int *p=&no;

//Allowed
    no++;
    p++;
    no=11;
    (*p)++;

    return 0;
}
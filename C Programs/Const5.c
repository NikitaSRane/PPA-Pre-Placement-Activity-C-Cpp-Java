#include<stdio.h>

int main()
{
    int no=11;
    int *const p=&no;

    no++;
    p++;
    no=11;
    (*p)++;

    return 0;
}
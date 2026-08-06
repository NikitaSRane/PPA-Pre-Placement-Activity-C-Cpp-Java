#include<stdio.h>

int main()
{
    const int no=11;
    const int *const p=&no;


    no++;
    p++;
    no=11;
    (*p)++;

    return 0;
}
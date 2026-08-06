#include<stdio.h>

int main()
{
    int i=1;
    loop:
        printf("%d",i++);
    if(i==5) goto out;
    goto loop;

    out:
    ;
    return 0;
}
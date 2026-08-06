#include<stdio.h>
int main()
{
    char far *p1,near *p2,huge *p3;
    printf("%d%d%d",sizeof(p1),sizeof(p2),sizeof(p3));
    return 0;
}
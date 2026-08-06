#include<stdio.h>

struct Marvellous
{
    int *ip;
    float *fp;
};

int main()
{
    int no=11;
    float f=10.67;

    struct Marvellous obj;

    obj.ip=&no;
    obj.fp=&f;

    return 0;
}
#include<stdio.h>

struct Demo
{
    int no;
    float f;
}; //8 bytes


int main()
{
    struct Demo Arr[3];
    Arr[0].no=11;
    Arr[0].f=80.60;

    Arr[1].no=21;
    Arr[1].f=90.60;

    Arr[2].no=51;
    Arr[2].f=111.80;

    printf("Size of structure Demo %d \n",sizeof(struct Demo));
    printf("Size of array of structure %d \n",sizeof(Arr));
    printf("Value of structure element of 1 %d \n",Arr[0].no);

    return 0;
}
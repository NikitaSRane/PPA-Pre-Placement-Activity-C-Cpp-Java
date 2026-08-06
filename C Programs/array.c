#include<stdio.h>

int main()
{
    int Arr[5]={10,20,30,40,50};

    printf("Array Arr is %d \n",Arr); // base address of 1st element because of design policy
    printf("Size of Arr is %d bytes \n",sizeof(Arr));
    printf("Address of Arr is %d \n",&Arr);

    return 0;
}
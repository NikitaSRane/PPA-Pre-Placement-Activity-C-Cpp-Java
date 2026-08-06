#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5]; //static memory allocation
    int *p=NULL;

    p=(int*)malloc(sizeof(int)*5);
    printf("Value of p: %d\n",*p);
    printf("Address of Heap: %d \n",p);
    free(p);
    printf("Address of Arr %d",Arr);
    return 0;
}
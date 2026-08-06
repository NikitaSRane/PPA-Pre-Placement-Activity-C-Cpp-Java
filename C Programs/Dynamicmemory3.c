#include<stdio.h>
#include<stdlib.h>

struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo obj; // static memory allocation //stack
    printf("%d \n",sizeof(struct Demo));
    printf("obj %d \n",sizeof(obj));
    struct Demo *ptr=NULL;
    printf("ptr %d \n",sizeof(ptr));
    ptr=(struct Demo *)malloc(sizeof(struct Demo)); //dynamic memory allocation// heap
    printf("ptr %d \n",sizeof(ptr));
    //usage of memory
    obj.i=11;
    obj.f=8.90;
    ptr->i=11;
    ptr->f=8.90;

    free(ptr); //deallocate memory
    return 0;
}
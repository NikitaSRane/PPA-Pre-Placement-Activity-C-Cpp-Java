//Demonstration of structure datatype

#include<stdio.h>


// structure declaration 
//memory not allocates
struct Demo
{
    char c; // 1 byte
    double d;}; // 8 bytes // size of structure is 9 bytes

int main()
{
    //object creation and Memory allocates
    struct Demo obj1;

    //member initialization
    obj1.d=11.0;
    obj1.c='M';

    printf("Size of obj1 %d\n", sizeof(obj1));

    return 0;
}
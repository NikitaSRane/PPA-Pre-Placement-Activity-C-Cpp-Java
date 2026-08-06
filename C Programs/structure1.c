//Demonstration of structure datatype

#include<stdio.h>


// structure declaration 
//memory not allocates
struct Demo
{
    int i;  // 4 bytes
    float f; // 4 bytes
    int j; // 4 bytes
    double d;}; // 8 bytes // size of structure is 20 bytes

int main()
{
    //object creation and Memory allocates
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;


    //member initialization
    obj1.d=11.0;
    obj2.i=21;
    obj3.j=51;

    printf("Size of obj1 %d\n", sizeof(obj1));
    printf("Size of obj2 %d\n ",sizeof(obj2));

    printf("Value of i of obj2 is %d",obj2.i); // 21

    return 0;
}
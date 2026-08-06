#include<stdio.h>

struct Demo
{
    int i; // 4
    float f; // 4
    double d; //8
}; //16

union Hello
{
    int i; //4
    float f; //4
    double d; //8
}; //8

int main()
{   
    struct Demo dobj;
    dobj.i=11;
    dobj.f=90.8;
    dobj.d=90.5;

    union Hello hobj;
    hobj.d =90.8;
    printf("Size of object of structure is %d \n",sizeof(dobj));
    printf("Size of object of union is %d \n",sizeof(hobj));

    printf("Value of i in dobj %d \n",dobj.i);
    printf("Value of f in dobj %f \n",dobj.f);
    printf("Value of d in dobj %lf \n",dobj.d);
    printf("Value of i in hobj %d \n",hobj.i);
    printf("Value of f in hobj %f \n",hobj.f);
    printf("Value of d in hobj %lf \n",hobj.d);
    
    return 0;

}
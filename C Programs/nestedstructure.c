#include<stdio.h>

struct Demo
{
    int no;
    int no2;
}; // 8 byte

struct Demo1
{
    int no;
    int no2;
    struct Demo dobj;
}; //16 byte

int main()
{   
    struct Demo1 d1obj; // 16 byte

    d1obj.no=11;
    d1obj.no2=20;
    d1obj.dobj.no=30;
    d1obj.dobj.no2=40;

    return 0;
}
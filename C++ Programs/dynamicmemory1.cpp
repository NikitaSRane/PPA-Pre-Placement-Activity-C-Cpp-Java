#include<iostream>
using namespace std;

int main()
{
    int *p=NULL;
    int *q=NULL;
    int *r=NULL;
    p=new int[5];// c++,java create array of 5 elements
    //p=(int *)malloc(5*sizeof(int)); //c
    q=new int; // for single element    
    //use memory

    r=new int(5);

    delete[]p; //c++, no such concept in java
    //delete p; // for single element 
    //free(p); c
    return 0;
}
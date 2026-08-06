#include<stdio.h>

void Fun()  //function prototype
{
    printf("Inside fun \n");
}

int Add(int a, int b)
{ 
    int c=0;
    c=a+b;
    return c;
}

int Sub(int a, int b)
{ 
    int c=0;
    c=a-b;
    return c;
}


int main()
{
    int Ret=0;

    Fun();
    void (*fptr)();
    fptr=Fun;
    fptr();

    int (*f1ptr)(int,int);
    f1ptr=Add;
    Ret=f1ptr(10,20);
    printf("Addition is %d \n",Ret);

    f1ptr=Sub;
    Ret=f1ptr(10,20);
    printf("Substraction is %d",Ret);

    return 0;

}
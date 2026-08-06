#include<stdio.h>

int Multiplication(int x,int y) //Function definition
{
    int mul=0;  
    mul=x*y;
    return mul;
}

int main()
{
    int A=10,B=20;
    int Ret=0;
    Ret=Multiplication(A,B);  // function call
    printf("Multiplication is: %d",Ret);

    return 0;

}
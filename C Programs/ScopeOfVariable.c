//Demonstration of scope of global variable and local variable

#include<stdio.h>

int X=10;  //global variable

void Demo()  // void not return anything
{
    int B=30;  //local variable

    printf("Value of B is %d \n",B);
    printf("Value of X is %d \n",X);

    printf("Value of A is %d\n",A);

}

int main()
{
    int A=20;  //local variable

    printf("Value of A is %d \n",A);
    printf("Value of X is %d \n",X);

    Demo();

    printf("Value of B is %d\n",B);

    return 0;
}
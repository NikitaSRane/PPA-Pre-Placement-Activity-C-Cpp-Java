//gcc First.c Second.c -o Myexe 

#include<stdio.h>

// variable Declaration
extern int no1;
extern int no2;
extern void Demo(); //Function declaration accepts nothing and returns nothing and external to this file. 2 step
extern int A ;
int main()
{
    Demo();  //function call 1 step
    printf("Value of no1 %d \n",no1);
    printf("Value of no2 %d \n",no2);
    printf("Value of A is %d \n",A);

    return 0;
}
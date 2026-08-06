//Demonstration of sizeof operator and address operator

#include<stdio.h>

int main()
{
    char ch='M';
    int i=11;
    float j=4.4;
    double d=9.8765;

    printf("Value and Size of datatypes \n\n");

    printf("Value of character %c\n",ch);
    printf("Address of character %d\n",&ch);
    printf("Size of character %d bytes\n\n",sizeof(ch));

    printf("Value of integer %d\n",i);
    printf("Address of integer %d\n",&i);
    printf("Size of integer %d bytes\n\n",sizeof(i));

    printf("Value of float %f\n",j);
    printf("Address of float %d\n",&j);  // %f, %lf allowed
    printf("Size of float %d bytes\n\n",sizeof(j));

    printf("Value of double %lf\n",d);
    printf("Address of double %d\n",&d); // only %lf allowed
    printf("Size of double %d bytes\n",sizeof(d));

    return 0;
}
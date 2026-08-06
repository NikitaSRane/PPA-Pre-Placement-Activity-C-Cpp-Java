//Demonstration of pointer to array

#include<stdio.h>

int main()
{
    int Arr[4]={10,20,30,40};
    printf("Size of array is %d \n",sizeof(Arr));
    printf("Address of array  is %d \n",&Arr);  // &Arr or Arr or &Arr[0]
    printf(" %d \n",&Arr[0]);
    printf(" %d \n",Arr);
    printf("Index 0 %d \n",Arr[0]);
    printf("Address of index 1 is %d\n",&Arr[1]);
    printf("Size of index 0 is %d \n",sizeof(Arr[0]));
    
    //int *a=&Arr[4];
    int *p=&Arr[0];
    int *q=&Arr[2];
    //printf("pointer a %d \n",*a);
    //printf("Address of pointer a %d \n",&a);
    printf("pointer p %d \n",*p);
    printf("Address of pointer p %d \n",&p);
    printf("pointer q %d \n",*q);
    printf("Address of pointer q %d \n",&q);

    return 0;
}
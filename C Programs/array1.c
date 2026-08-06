//Demonstration of ways of create and initialize array.

#include<stdio.h>

//First way

int Arr[4]={10,20,30,40}; //member initialization list

//Second way

int Brr[]={10,20,30,40};

//Third way
int Brr[4];
Brr[0]=10; //member by member initialization list
Brr[1]=20;
Brr[2]=30;
Brr[3]=40;

//All below memory allocation are static memory allocation.
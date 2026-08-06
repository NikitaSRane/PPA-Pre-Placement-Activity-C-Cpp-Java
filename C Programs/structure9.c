#include<stdio.h>
#pragma pack (1)

struct Demo
{
    int i; // 4
    char ch1; //1
    float f; // 4
    float d; //4

};  // expected 14 bytes 

int main()
{

    struct Demo obj;
    printf("Size of obj is %d \n",sizeof(obj)); //20 bytes
    return 0;
}
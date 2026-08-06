#include<stdio.h>

struct Array
{
    int Arr[3];
    float Brr[2];
};  // 20 bytes


int main()
{

    struct Array obj;
    obj.Arr[1]=11;
    obj.Arr[0]=30;
    obj.Arr[2]=80;

    obj.Brr[0]=9.70;
    obj.Brr[1]=30.5;

    printf("%d",obj.Arr[2]);
    printf("%f",obj.Brr[1]);
    return 0;
}
#include<stdio.h>

int main()
{
    int no1=10;
    const int no2=20; // read only variable error

    no1++; 
    no2++; //no2=no2+1 =21 value change but not assigned because of constant.

    no1--;
    no2--;

    printf("%d %d \n",no1, no2);

    return 0;
}
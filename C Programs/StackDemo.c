#include<stdio.h>

int Addition(int no1,int no2)
{
    int ans=0;
    printf("Inside addition\n");

    ans=no1+no2;
    return ans;
}

int main()
{
    int a=11;
    int b=10;
    int iRet=0;

    printf("Inside main\n");  

    iRet=Addition(a,b);
    printf("Addition of two number is: %d",iRet);

    return 0;
}
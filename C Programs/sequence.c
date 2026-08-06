#include<stdio.h>

int Add(int no1,int no2)
{
    int iret=0;
    iret=no1+no2;
    return iret; 
}

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ians=0;

    printf("Enter first number: \n");
    scanf("%d",&ivalue1);

    printf("Enter second number: \n");
    scanf("%d",&ivalue2);

    ians=Add(ivalue1,ivalue2);
    printf("Addition of two nos is %d",ians);

    return 0;
}
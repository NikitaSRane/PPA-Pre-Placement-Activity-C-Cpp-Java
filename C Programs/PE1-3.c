//Average of three numbers.

#include<stdio.h>

int main()
{
    float no1,no2,no3,avg;

    printf("Enter three numbers \t");
    scanf("%f %f %f",&no1,&no2,&no3);
    avg=(no1+no2+no3)/3;
    printf("Average of three numbers is %0.2f",avg);

    return 0;

}
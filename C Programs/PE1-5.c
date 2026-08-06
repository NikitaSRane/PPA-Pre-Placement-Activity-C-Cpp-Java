//Find area of a triangle 

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the sides of triangle\t");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of tringle is %0.2f sq.units",area);
    return 0;
}

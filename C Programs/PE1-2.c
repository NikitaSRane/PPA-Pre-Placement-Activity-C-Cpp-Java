//Circumference and area of circle
#include<stdio.h>

int main()
{
    float r,cir,area;
    printf("Enter the radius of circle\t");
    scanf("%f",&r);
    cir=2*3.14*r;
    area=3.14*r*r;
    printf("Circumference of circle is %0.2f\n",cir);
    printf("Area of circle is %0.2f\n",area);   
    return 0;
}    
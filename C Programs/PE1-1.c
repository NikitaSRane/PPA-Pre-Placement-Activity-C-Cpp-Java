//Convert temperature in fahrenheit to celsius
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in fahrenheit\t");
    scanf("%f",&f);
    c=5.0/9.0*(f-32);
    printf("Temperature in Celsius is %0.2f",c); // %0.2f for 2 decimal point of floating number 
    return 0;

}
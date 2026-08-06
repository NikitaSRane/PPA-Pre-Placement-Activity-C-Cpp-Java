//convert age into number of seconds

#include<stdio.h>

int main()
{
    int age;
    float agesec;

    printf("Enter age: \t");
    scanf("%d",age);

    agesec=age*365.25*24*60*60;

    printf("Age into seconds %0.2E ",agesec);
    return 0;
}
//Velocity after time

#include<stdio.h>

int main()
{
    float initalv,acc,velocity,time;

    printf("Enter the initial velocity and acceleration \t");
    scanf("%f%f",&initalv,&acc);
    printf("Enter the time in sec \t");
    scanf("%f",&time);
    velocity=initalv+acc*time;

    printf("Velocity after %f sec is %f",time,velocity);

    return 0;
}
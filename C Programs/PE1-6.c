//Convert velocity from km to m/sec

#include<stdio.h>

int main()
{
    float velkm, velm;

    printf("Enter velocity in Km/hr\t");
    scanf("%f",&velkm);

    velm=velkm*5/18;
    printf("Velocity in meter is %f",velm);
    return 0;
}
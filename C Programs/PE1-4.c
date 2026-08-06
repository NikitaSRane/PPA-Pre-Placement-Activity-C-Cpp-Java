//Simple interest and maturity amount

#include<stdio.h>

int main()
{
    float p,roi, t,i,amt;

    printf("Enter principle ,rate and time:\t");
    scanf("%f%f%f",&p,&roi,&t);
    i=p*roi*t/100;
    amt=p+i;
    printf("Interest is %0.2f\n",i);
    printf("Amount is %0.2f\n",amt);

    return 0;
    
}
#include<stdio.h>
// character stuffing problem
int main()
{
    int a,b;

    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    printf("%d +%d = %d\n",a,b,a+b);
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d *%d =%d\n",a,b,a*b);
    printf("%d % %d=%d\n",a,b,a%b);
}
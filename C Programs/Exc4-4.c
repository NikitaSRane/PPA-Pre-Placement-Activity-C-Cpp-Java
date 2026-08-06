#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    printf("%d%d%d",*ptr,*ptr++,++*ptr);
    return 0;
}
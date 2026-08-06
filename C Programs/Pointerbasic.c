//Demonstration of array and pointer

#include<stdio.h>

int main()
{

    int Arr[4]={1,2,3,4};
    int *p=&Arr[0];

    char ch='M';
    char *c=&ch;

    int a=10;
    short int b=10;
    long int d=10;

    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(d));

    printf("%d\n",Arr);
    printf("%d \n",&Arr);
    printf("%d \n",&Arr[0]);

    printf("%d \n",sizeof(Arr));
    printf("%d\n",sizeof(Arr[0]));
    printf("%d\n",sizeof(*p));

    printf("%d\n",*p);
    printf("%d \n",p);
    printf("%d\n",&p);
    printf("%d\n",&*p);

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(c));
    return 0;
}

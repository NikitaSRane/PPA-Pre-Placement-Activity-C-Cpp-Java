#include<stdio.h>

struct Demo{
    int no;    //4 bytes
    struct Demo *next; // 8 bytes due to pointer

}; //12 bytes

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.no=11;
    obj2.no=21;
    obj3.no=51;

    obj1.next=&obj2;
    obj2.next=&obj3;
    obj3.next=NULL;

    printf("%d",obj1.next->no); //=11;
    printf("%d",obj2.next->no);//=51;
    //obj1.next->next->next

    return 0;
}
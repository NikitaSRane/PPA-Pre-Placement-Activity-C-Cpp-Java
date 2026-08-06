#include<stdio.h>

struct point
{
    int x,y;
};

int main()
{
    struct point pt1;
    printf("Address of structure point pt1 %d \n",&pt1);
    printf("Address of pt1.x is %d and pt1.y %d \n",&pt1.x,&pt1.y);


    struct point pt2;
    printf("Address of structure point pt2 %d \n",&pt2);
    printf("Address of pt2.x is %d and pt2.y %d",&pt2.x,&pt2.y);

    return 0;
}
#include<stdio.h>

struct point
{
    int x,y;
};

int main()
{
    struct point pt1={2,3};
    printf("pt1.x=%d and pt1.y=%d \n",pt1.x, pt1.y);
    struct point pt2=pt1;
    printf("pt2.x=%d and pt2.y=%d\n",pt2.x,pt2.y);
    struct point pt3=pt2;
    printf("pt3.x=%d and pt3.y=%d\n",pt3.x,pt3.y);
    return 0;
}
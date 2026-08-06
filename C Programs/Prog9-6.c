#include<stdio.h>
#pragma pack(1)
struct point
{
    char ch1;
    int i;
    char ch2;
    float f1;
};

int main()
{
    struct point pt1;
    printf("Size of structure datatype is %d \n",sizeof(struct point));
    printf("Size of object of structure datatype pt1 is %d \n",sizeof(pt1));



    printf("Size of structure datatype is %d \n",sizeof(struct point));
    printf("Size of object of structure datatype pt1 is %d \n",sizeof(pt1));
    return 0;
}
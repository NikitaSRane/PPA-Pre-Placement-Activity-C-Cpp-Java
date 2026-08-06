#include<stdio.h>

struct coord
{
    int x,y;
};

int main()
{
    struct coord p={2,3};
    struct coord *ptr=&p;

    printf("Size of coord : %d bytes \n",sizeof(struct coord));
    printf("Size of pointer coord : %d bytes \n", sizeof(struct coord*));
    printf("Direct accessing %d and %d\n",(*ptr).x,(*ptr).y); // () to avoid ambiguity of operators
    printf("Indirect accessing %d and %d\n",ptr->x,ptr->y);
    return 0;

}
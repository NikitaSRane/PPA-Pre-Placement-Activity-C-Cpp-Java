// Usage of sizeof operator to find size of datatypes

#include"stdio.h" // we can  use " " instead of < >

int main()
{
    printf("Character takes %d byte in memory \n", sizeof(char));
    printf("Integer takes %d byte in memory \n", sizeof(int));
    printf("Float takes %d byte in memory \n", sizeof(float));
    printf("Double takes %d byte in memory \n", sizeof(double));

    return 0;
}
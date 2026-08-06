// Usage of sizeof operator to find size of value

#include<stdio.h> 

int main()
{

    printf("Size of integer 9 is %d bytes \n",sizeof(9));
    printf("Size of float 4.5 is %d bytes \n",sizeof(4.5f));
    printf("Size of double 4.5 is %d bytes \n", sizeof(4.5));
    printf("Size of '7' is %d bytes \n", sizeof('7'));
    printf("Size of 'M' is %d bytes \n", sizeof('M'));
    printf("Size of char is %d bytes \n", sizeof(char));
    printf("Size of '\n' is %d bytes \n", sizeof('\n'));
    printf("%d%c\n");
    printf("%d");
    return 0;
}
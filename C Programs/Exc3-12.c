#include<stdio.h>
int main()
{
    int i=1,j=3;

    switch(i)
    {
        case 1:
            printf("This is outer case 1");
            switch(j)
            {
                case 3:
                    printf("This is inner case 1");
                    break;
                default:
                    printf("INner default");

            }
        case 2:
            printf("This is outer case 2");
    }
    return 0;
}
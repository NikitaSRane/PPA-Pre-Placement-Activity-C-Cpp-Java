#include<stdio.h>

int main()
{
    int itoken=0;
    printf("Enter your token number: ");
    scanf("%d",&itoken);

    // 11,21,51,101

    switch(itoken)
    {
        case 11:
        case 21:
        case 51:
        case 101:
            printf("Shoes found");
        break;

        default:
            printf("Sorry Shoes not found.");
    }

    return 0;
}
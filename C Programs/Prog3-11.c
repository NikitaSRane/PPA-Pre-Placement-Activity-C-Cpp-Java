#include<stdio.h>

int main()
{
    char ch='\o';
    printf("Value of letter is %c",ch);
    printf("Enter the letter \n");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        printf("lower case");
        case 'A':
        case 'B':
        printf("Upper case");
        default:
        printf("No such case");
    }
    return 0;
}
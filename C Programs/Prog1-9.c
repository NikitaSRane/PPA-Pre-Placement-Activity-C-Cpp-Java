// swap two numbers with third number

#include<stdio.h>
int main()
{
    int number1, number2,number3;  //variable declaration
    printf("Enter Numbers: \t");  // \t for tab spacing
    scanf("%d %d",&number1,&number2);
    printf("Numbers befor swapping %d %d \n",number1,number2);
    number3=number1;
    number1=number2;
    number2=number3;
    printf("Numbers after swapping %d %d \n",number1,number2);
    return 0;
}
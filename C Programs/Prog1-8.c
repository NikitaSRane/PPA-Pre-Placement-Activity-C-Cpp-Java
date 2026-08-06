#include<stdio.h>
// Addition of two values
int main()
{
    int number1, number2,number3;  //variable declaration
    printf("Enter Numbers: \t");  // \t for tab spacing
    scanf("%d %d",&number1,&number2);
    number3= number1+number2;
    printf("The addition is %d",number3);
    return 0;
}
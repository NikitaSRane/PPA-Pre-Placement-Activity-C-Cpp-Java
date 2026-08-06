// swap two numbers without third number

#include<stdio.h>
int main()
{
    int number1, number2;  //variable declaration
    printf("Enter Numbers: \t");  // \t for tab spacing
    scanf("%d %d",&number1,&number2);  // 10 20
    printf("Numbers befor swapping %d %d \n",number1,number2);// 10 20
    number2=number1+number2; // 30
    number1=number2-number1; //30-10 = 20
    number2=number2-number1; //30-20=10
    printf("Numbers after swapping %d %d \n",number1,number2); // 20 10
    return 0;
}
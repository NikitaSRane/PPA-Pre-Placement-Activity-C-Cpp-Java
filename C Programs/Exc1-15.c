#include<stdio.h>
// Use of scanf function for input value
int main()
{
    int number;  //variable declaration
    printf("Enter Number: ");
    scanf("%d",number);  // & not specify to the identifier that why garbage value assigned.
    printf("The number entered is %d",number);
    return 0;
}
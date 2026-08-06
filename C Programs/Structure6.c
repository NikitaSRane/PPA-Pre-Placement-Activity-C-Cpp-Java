// Demonstration of Indirect accessing 
#include<stdio.h>

struct Student
{
    int marks; //4 bytes
    int age; // 4 bytes
    char division; // 1 bytes

};

int main()
{
    struct Student obj;
    struct Student *ptr=NULL;
    ptr=&obj;

    ptr->marks=90;
    ptr->age=23;
    ptr->division='A';

    return 0;

}
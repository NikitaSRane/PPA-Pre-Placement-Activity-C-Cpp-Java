// Demonstration of Direct accessing 
#include<stdio.h>

struct Student
{
    int marks; //4 bytes
    int age; // 4 bytes
    char divison; // 1 bytes

}; // 9bytes


int main()
{
    struct Student Amit;
    struct Student Pooja;

    Amit.marks=90;
    Amit.age=23;
    Amit.divison='A';

    Pooja.marks=98;
    Pooja.age=21;
    Pooja.divison='C';

    return 0;
}
#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    const int j; //constant characteristics


    Demo(int x=10, int y=20):j(y)//constant characteristics initialization
    {
        i=x;
    }

    void Fun()
    {   
        int A;
        const int B;//NA
        i++;//A
        j++;//NA because of no 8
        A++; //A (18)
        B++;//NA (19)
    }

    void Gun() const //constant function
    {
        int A;
        const int B;// constant variable// NA
        i++;//NA
        j++;//NA (24)/(8)
        A++;//A (28)
        B++; //NA (29)
    }

};

int main()
{
    Demo obj1;
    const Demo obj2(30);// constant object
    Demo obj3(40,50);
    obj1.Fun();//A
    obj1.Gun();//A
    obj2.Gun();//A
    obj2.Fun();//NA
    obj1.i++;//A
    obj1.j++; //NA
    obj2.i++;//NA
    obj2.j++; //NA
    return 0;
}
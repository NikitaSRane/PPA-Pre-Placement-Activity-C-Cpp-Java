#include<iostream>
using namespace std;

class Demo
{
    public:
    int A,B;

    Demo(int i=0, int j=0)
    {
        A=i;
        B=j;
    } 
};

int main()
{
    Demo obj1;
    Demo obj2(10);
    Demo obj4(0,10);
    Demo obj3(20,30);

    return 0;
}
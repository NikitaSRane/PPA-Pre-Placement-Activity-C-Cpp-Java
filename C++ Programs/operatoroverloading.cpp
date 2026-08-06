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

    Demo A(0,10);
    Demo B(20,30);
    Demo Ans(0,0);

    Ans=A+B;//Error

    return 0;
}
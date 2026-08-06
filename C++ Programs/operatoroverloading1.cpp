#include<iostream>
using namespace std;

class Demo
{
    public:
    int A,B;

    Demo(int i=0, int j=0) // parameterized with default arguments
    {
        A=i;
        B=j;
    } 
};

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside operator + function"<<"\n";
    return Demo(obj1.A+obj2.A,obj1.B+obj2.B);// return obj;
}

int main()
{
    Demo X(10,20);
    Demo Y(30,40);
    Demo Ans(0,0);// Demo Ans;

    Ans=X+Y;// Ans=+(x,Y);
    cout<<Ans.A<<Ans.B;
    return 0;
}
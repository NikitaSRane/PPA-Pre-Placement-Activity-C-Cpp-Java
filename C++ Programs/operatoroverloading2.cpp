#include<iostream>
using namespace std;

class Demo
{
    
    int A,B;
    public:
    Demo(int i=0, int j=0) // parameterized with default arguments
    {
        A=i;
        B=j;
    } 
    void Display()
    {
        cout<<A<<"\n";
        cout<<B<<"\n";
    }
    void DisplayAddition()
    {
        cout<<A+B;
    }
    friend Demo operator +(Demo,Demo); // operator overloading prototype
};
Demo operator +(Demo obj1, Demo obj2) // operator overloading function
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
    Ans.Display(); 
    Ans.DisplayAddition();
    return 0;
}
#include<iostream>
using namespace std;

class Base1
{
    public:
    int A;
    Base1()
    {
        cout<<"Inside Base1 constructor. \n";
    }
    ~Base1()
    {
        cout<<"Inside Base1 destructor. \n";
    }
    void Fun()
    {
        cout<<"Inside Fun Base1. \n";
    }
};

class Base2
{
    public:
    int X,Y,Z;
    Base2()
    {
        cout<<"Inside Base2 constructor. \n";
    }
    ~Base2()
    {
        cout<<"Inside Base2 destructor. \n";
    }
    void Gun()
    {
        cout<<"Inside Gun Base2 \n";
    }
};

class Derived : public Base1, public Base2 // not allowed in java
{
    public:
    int I,J;
    Derived()
    {
        cout<<"Inside Derived constructor. \n";
    }
    ~Derived()
    {
        cout<<"Inside Derived destructor. \n";
    }
    void Sun()
    {
        cout<<"Inside Sun Derived \n";
    }
};

int main()
{
    cout<<sizeof(Base1);
    cout<<sizeof(Base2);
    cout<<sizeof(Derived);
    Derived obj;
    obj.Fun();
    obj.Gun();
    obj.Sun();

    return 0;
}
#include<iostream>

using namespace std;

class Base
{
    public:
    int A,B; // 8 bytes

    Base()
    {
        cout<<"Inside base constructor.\n";
    }

    ~Base()
    {
        cout<<"Inside base destructor.\n";
    }

    void Fun()
    {
        cout<<"Inside Fun Base. \n";
    }
};

class Derived : public Base //class Derived extends Base in java
{
    public:
    int x,y; // 16 bytes = 8 of base+8 of derived

    Derived()
    {
        cout<<"Inside derived constructor. \n";
    }

    ~Derived()
    {
        cout<<"Inside derived destructor.\n";
    }
    void Gun()
    {
        cout<<"Inside Gun Derived.\n";
    }
};

int main()
{
    Derived *ptr=NULL;
    ptr=new Derived;  //dynamic memory creation

    cout<<sizeof(*ptr)<<endl;
    ptr->Fun();
    ptr->Gun();
    cout<<ptr->A;
    delete ptr;
    return 0;
}
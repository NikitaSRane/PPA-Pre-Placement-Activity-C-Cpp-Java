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

class multilevel : public Derived //class Derived extends Base in java
{
    public:
    int i,j; // 24 bytes = 8 of base+8 of derived+8 of multilevel

    multilevel()
    {
        cout<<"Inside multilevel constructor. \n";
    }

    ~multilevel()
    {
        cout<<"Inside multilevel destructor.\n";
    }
    void Gun()
    {
        cout<<"Inside Gun multilevel.\n";
    }
};

class Demo{};

int main()
{
    multilevel obj;
    cout<<sizeof(Base)<<endl;
    cout<<sizeof(Derived)<<endl;
    cout<<sizeof(obj)<<endl;
    obj.Fun();
    obj.Gun();
    cout<<obj.A<<endl;
    cout<<obj.B<<endl;
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    
    return 0;
}
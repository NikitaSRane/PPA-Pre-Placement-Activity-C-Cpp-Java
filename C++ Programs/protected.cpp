#include<iostream>
using namespace std;

class Base1
{
    int x;
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public:
    Base1()
    {
        cout<<"Inside constructor. \n";
        i=10;
        j=20;
        k=30;
    }
    ~Base1()
    {
        cout<<"Destructor \n";
    }

};

class Derived : public Base1
{
    public:
    void Fun()
    {
        cout<<"Value of public i: "<<i<<"\n";
        //cout<<"Value of private j: "<<j<<"\n";
        cout<<"Value of protected k" <<k<<"\n";
    }

};

int main()
{   
    Derived obj;  // 12 bytes memory
    cout<<"value of public i:"<<obj.i<<"\n"; //Allowed
    //cout<<"Value of private j:"<<obj.j<<"\n"; //Not allowed
    //cout<<"Value of protected k: "<<obj.k<<"\n"; //Not allowed
    //cout<<"Value of private x: "<<obj.x<<"\n"; //Not allowed
    obj.Fun(); //Allowed
    return 0;
}
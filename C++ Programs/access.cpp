#include<iostream>
using namespace std;

class Base1
{
    int x;  // default access specifier is private

    void Gun() // private function
    {
        cout<<"Inside the Gun \n";
    }

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
    void Fun()
    {
        cout<<"From Fun";
        cout<<"Value of public i: "<<i<<"\n"; //Allowed
        cout<<"Value of private j: "<<j<<"\n"; //Allowed
        cout<<"Value of protected k: "<<k<<"\n"; //Allowed
        cout<<"Value of private x: "<<x<<"\n"; //allowed
    }
};

int main()
{   
    Base1 obj; //16 bytes memory, constructor call
    cout<<"value of public i:"<<obj.i<<"\n"; //Allowed
    cout<<"Value of private j:"<<obj.j<<"\n"; //Not allowed
    cout<<"Value of protected k: "<<obj.k<<"\n"; //Not allowed
    cout<<"Value of private x: "<<obj.x<<"\n"; //Not allowed
    obj.Fun(); //Allowed
    obj.Gun();// Not allowed
    return 0;
}
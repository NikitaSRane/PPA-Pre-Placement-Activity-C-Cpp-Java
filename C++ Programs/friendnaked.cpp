#include<iostream>
using namespace std;

class Demo
{
    public://access specifier
    int i;
    private:
    int j;
    protected:
    int k;

    public:
    Demo() //constructor
    {
        i=10;
        j=20;
        k=30;
    }
    friend void Fun();
};
void Fun() //nacked function
{
    Demo obj;
    cout<<"Value of i of Demo is "<<obj.i<<"\n";
    cout<<"Value of j of Demo is "<<obj.j<<"\n";
    cout<<"Value of k of Demo is "<<obj.k<<"\n";
}

int main() //nacked function
{
    Fun();
    return 0;
}
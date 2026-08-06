#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    float f;
    double d;

    void Fun(int A) // void Fun(Demo *this,int A)
    {
        cout<<"Inside Fun";
        cout<<this->i<<"\n";
    }

    void Gun(int A, int B)
    {
        cout<<"Inside Gun";
    }

}; // 16 bytes memory
int main()
{
    Demo obj1; //100 address
    Demo obj2;

    obj1.i=101;
    obj2.i=201;

    obj1.Fun(11); //Fun(&obj1,11); // Fun(100,11);
    obj2.Fun(11); //Fun(&obj2,11); //Fun(200,11);
    obj2.Gun(11,21);

    return 0;
}
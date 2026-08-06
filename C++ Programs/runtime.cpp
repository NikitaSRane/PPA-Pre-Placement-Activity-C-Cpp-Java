#include<iostream>
using namespace std;

class Base
{
    public: // access specifier
    int a,b;

    void Fun() // function definition //1000
    {
        cout<<"Inside Base Fun"<<"\n";
    }
    void Gun(int A) // function definition //2000
    {
        cout<<"Inside Base Gun one int"<<"\n";
    }
    void Gun(int i, int j) // overloaded function definition //3000
    {
        cout<<"Inside Base Gun two int"<<"\n";
    }

}; // 8 bytes

class Derived : public Base
{
    public:
    int x,y; 
    Base obj;
    void Sun() //4000
    {
        cout<<"Inside Derived Sun"<<"\n";
    }
    void Fun(int A) // function redefinition //5000
    {
        cout<<"Inside Derived Fun one int"<<"\n";
    }
};//16 bytes

int main()
{   
    cout<<"Size of base "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived "<<sizeof(Derived)<<"\n";
    Derived dobj; //16 bytes
    //Base bobj;
    //bobj.Fun();// 1000 after creating object of base class
    dobj.obj.Fun(); // creating member bobj inside derived 1000
    //dobj.Base::Fun();//1000
    dobj.Fun(11);// 5000
    dobj.Gun(10);//2000
    dobj.Gun(20,30);//3000
    dobj.Sun();//4000
    return 0;
}
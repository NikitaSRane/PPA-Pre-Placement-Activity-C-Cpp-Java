#include<iostream>
using namespace std;
#pragma pack(1)

class Demo
{
    public: // access specifier
    int i;  // instance variable
    int j; // instance variable
    //char c; padding concept is as it is in c++
    //char m;  To avoid padding use pragma pack option
    static int k; // class variable
    static int l; // class variable

    Demo() //default constructor
    {
        cout<<"Inside Constructor \n";
        i=0;
        j=0;
    }
    Demo(int A,int B) //parameterized contructor
    {
        cout<<"Parameterized constructor \n";
        i=A;
        j=B;
    }

    ~Demo()
    {
        cout<<"Destructor";
    }

    void Fun() // instance method void Fun(Demo *this)
    {
        cout<<"Inside Fun \n";
        cout<<"Value for i: "<<this->i<<"\n"; //i allowed // address->i;//100->i;
        cout<<"Value for j: "<<j<<"\n"; // this->i allowed
        cout<<"Value for k: "<<k<<"\n";
        cout<<"Value for l: "<<l<<"\n";
    }

    static void Gun() //class method
    {
        cout<<"Inside Gun \n";
        cout<<"Value for k: "<<k<<"\n"; //Demo::k allowed but not use as we already in demo class
        cout<<"Value for l: "<<l<<"\n";
        //cout<<"Value for i: "<<Demo::i<<"\n"; Error comes
        //cout<<"Value for j: "<<Demo::j<<"\n";
    }

}obj2(10,11);

//load time variable
int Demo::k=3; //initialization of static variable of class demo
int Demo::l=0;

int main()
{
    cout<<"Inside main \n";
    cout<<"Value of k :"<<Demo::k<<"\n";
    cout<<"Value of l :"<<Demo::l<<"\n";
    Demo::Gun(); //static function/method

    //Demo::Fun(); error comes
    //cout<<"Value of i: \n"<<Demo::i; not allowed to access instance variable with name of class.

    Demo obj1;// address 100
    //Demo obj2; create object at the ending of class declaration
    cout<<"Size of class object is "<<sizeof(obj1)<<"byte \n";
    cout<<obj1.i<<obj1.j<<obj1.k<<obj1.l<<"\n";
    obj1.i=100;
    obj1.j=200;
    cout<<obj1.i<<obj1.j<<obj1.k<<obj1.l<<"\n";
    obj1.Fun(); //Fun(&obj1);// Fun(100);
    cout<<"obj2 \n";
    cout<<"Value of k:"<<obj2.k<<"\n";
    cout<<"Value of i:"<<obj2.i<<"\n";
    cout<<"Value of j:"<<obj2.j<<"\n";
    cout<<"Value of l:"<<obj2.l<<"\n";
    obj2.Fun();
    Demo obj3(20,21);
    cout<<"obj3 \n";
    cout<<"Value of k:"<<obj3.k<<"\n";
    cout<<"Value of i:"<<obj3.i<<"\n";
    cout<<"Value of j:"<<obj3.j<<"\n";
    cout<<"Value of l:"<<obj3.l<<"\n";
    obj1.Gun();

    return 0;
}
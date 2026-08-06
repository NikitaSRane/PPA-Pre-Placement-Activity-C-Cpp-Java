#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;
    void Fun() //definition 1000
    {
        cout<<"Inside base Fun"<<"\n";
    }
    void Gun() //definition 2000
    {
        cout<<"Inside base Gun"<<"\n";
    }

    void Sun() //definition 3000
    {
        cout<<"Inside base Sun"<<"\n";
    }
}; // 8 bytes predict

class Derived: public Base
{
    public:
    int a,b;
    void Gun() //redefinition 4000
    {
        cout<<"Inside derived Gun"<<"\n";
    }
    void Run() //definition 5000
    {
        cout<<"Inside derived Run"<<"\n";
    }
    void Mun() //definition 6000
    {
        cout<<"Inside derived Mun"<<"\n";
    }
}; //16 bytes predict

int main()
{
    Derived dobj;
    cout<<"Size of Base class"<<sizeof(Base)<<"\n";
    cout<<"Size of derived class"<<sizeof(Derived)<<"\n";

    Base *bp=NULL;

    bp=&dobj;// allowed upcasting pointer type=base class and  pointed type=derived class

    bp->Fun();//1000
    bp->Gun();//2000
    bp->Sun();//3000


    return 0;
}
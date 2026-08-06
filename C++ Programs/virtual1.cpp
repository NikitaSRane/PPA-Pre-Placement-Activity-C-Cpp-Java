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
    virtual void Gun() //definition 2000
    {
        cout<<"Inside base Gun"<<"\n";
    }

    virtual void Sun() //definition 3000
    {
        cout<<"Inside base Sun"<<"\n";
    }
    virtual void Run() //definition 4000
    {
        cout<<"Inside base Run"<<"\n";
    }
}; // 16 bytes predict

class Derived: public Base
{
    public:
    int a,b;
    void Gun() //redefinition 5000
    {
        cout<<"Inside derived Gun"<<"\n";
    }
    virtual void Run() //definition 6000
    {
        cout<<"Inside derived Run"<<"\n";
    }
    virtual void Mun() //definition 7000
    {
        cout<<"Inside derived Mun"<<"\n";
    }
}; //24 bytes predict

int main()
{
    Derived dobj; //static memory allocation
    cout<<"Size of Base class"<<sizeof(Base)<<"\n";
    cout<<"Size of derived class"<<sizeof(Derived)<<"\n";

    Base *bp=NULL;
    //bp=(Base *)malloc(sizeof(Derived));// upcasting using melloc c programming
    //Base &bref=dobj;//using reference with static memory allocation but memmory now m
    //Base *bp=new Derived; // dynamic memory allocation with upcasting

    bp=&dobj;// allowed upcasting pointer type=base class and  pointed type=derived class

    bp->Fun();//1000 //bref.Fun();
    bp->Gun();//2000  override 5000 //bref.Gun();
    bp->Sun();//3000 //bref.Sun();
    bp->Run();//4000  override  6000 //bref.Run();
    //bp->Mun();//6000 error not member of base class //bref.Mun();

    //free(bp);
    return 0;
}
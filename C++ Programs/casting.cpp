#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;
}; // 8 bytes predict

class Derived: public Base
{
    public:
    int a,b;
}; //16 bytes predict

int main()
{
    Base bobj; //8 bytes object
    Derived dobj; // 16 bytes object
    Base *bp=NULL; // new 8 bytes pointer size
    Derived *dp=NULL; // new 8 bytes pointer size but can fetch 16 bytes

    bp=&bobj; // no casting Allowed
    dp=&dobj; //no casting Allowed
    bp=&dobj;// upcasting Allowed
    //dp=&bobj; //downcasting not allowed
    return 0;
}
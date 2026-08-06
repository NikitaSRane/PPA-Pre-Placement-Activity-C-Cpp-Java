#include<iostream>
using namespace std;

int main()
{
    int no=11;

    int &x=no;

    int *p=&no;

    int &a=x;

    double d=90.9;
    double &y=d;
    double &z=d;
    double &f=z;

    cout<<"Value of no is "<<no<<"\n";
    cout<<"Size of no is"<<sizeof(no)<<"\n";
    cout<<"Address of no is "<<&no<<"\n"; //p
    cout<<"Size of pointer p is"<<sizeof(p)<<"\n";
    cout<<"Value of x is "<<x<<"\n";
    cout<<"Address of x is"<<&x<<"\n";
    cout<<"Size of x is"<<sizeof(x)<<"\n";

    return 0;
}
#include<iostream>
using namespace std;

//call by value
void Fun(int No)
{
    cout<<"Inside call by value "<<No<<"\n";
    No++;//11
}

//call by address
void Gun(int *p)
{
    cout<<"Inside call by address "<<*p<<"\n";
    (*p)++;//11 in j
}

//call by reference
void Sun(int &ref)
{
    cout<<"Inside call by reference "<<ref<<"\n";
    ref++;
}

int main()
{
    int i=10;
    int j=10;
    int k=10;

    Fun(i);
    cout<<i<<"\n";
    Gun(&j);
    cout<<j<<"\n";
    Sun(k);
    cout<<k<<"\n";
    return 0;
}
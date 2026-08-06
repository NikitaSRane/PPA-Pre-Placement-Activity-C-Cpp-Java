// function template

#include<iostream>
using namespace std;

template<class T>
T Add(T i,T j)
{
    T Ans;
    Ans=i+j;
    return Ans;
}


int main()
{
    int a=10, b=10, iRet=0;
    float x=90.23f, y=50.60f, fRet=0.0f;
    double p=90.23, q=50.60,dRet=0.0;

    iRet=Add(a,b);
    cout<<"Addition of integer type: "<<iRet<<endl;

    fRet=Add(x,y);
    cout<<"Addition of float type: "<<fRet<<endl;
    
    dRet=Add(p,q);
    cout<<"Addition of double type: "<<dRet<<endl;
    return 0;
}
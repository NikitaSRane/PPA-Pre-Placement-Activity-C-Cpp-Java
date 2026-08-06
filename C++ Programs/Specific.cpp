#include<iostream>
using namespace std;

int Addi(int i,int j)
{
    int Ans=0;
    Ans=i+j;
    return Ans;
}

float Addf(float i,float j)
{
    float Ans=0;
    Ans=i+j;
    return Ans;
}


int main()
{
    int a=10, b=10, iRet=0;
    float x=90.23f, y=50.60f, fRet=0.0f;

    iRet=Addi(a,b);
    cout<<"Addition of integer type: "<<iRet<<endl;

    fRet=Addf(x,y);
    cout<<"Addition of float type: "<<fRet<<endl;
    
    return 0;
}
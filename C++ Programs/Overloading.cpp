#include<iostream>
using namespace std;

class Overloading
{   
    public:
    // name maling
    //Add@2ii
    int Add(int A,int B) // address from text segment 1000
    {
        cout<<"Addition of integers: \n";
        return A+B;
    }
    /* Error comes due to return type change
    float Add(int A,int B) // address from text segment 1000
    {
        cout<<"Addition of integers: \n";
        return A+B;
    }*/

    //Add@2fi
    int Add(float A,float B) // address 2000
    {
        cout<<"Addition of floats :\n";
        return A+B;
    }
    //Add@2dd
    int Add(double A,double B) //address 3000
    {
        cout<<"Addition of doubles:\n";
        return A+B;
    }
    //Add@3iii
    int Add(int A,int B, int C) //address 4000
    {
        cout<<"Addition of three values: \n";
        return A+B+C;
    }
    //Fun@2if 
    void Fun(int A,float B)//5000
    {
        cout<<"Inside Fun@2if\n";
        cout<<A<<B;

    }
    //Fun@2fi
    void Fun(float A,int B) //6000
    {
        cout<<"\nInside Fun@2fi \n";
        cout<<A<<B;
    }

    /*    Error comes due to same definition
    void Fun(float A,int B) //6000
    {
        cout<<"\nInside Fun@2fi \n";
        cout<<A<<B;
    }*/
};

int main()
{
    Overloading obj1;
    int i;
    float f;
    double d;

    i=obj1.Add(20,30); //1000
    cout<<"\n"<<i<<"\n";

    i=obj1.Add(30,40,50);//4000
    cout<<i<<"\n";

    f=obj1.Add(30.5f,90.0f); //2000
    cout<<f<<"\n";

    d=obj1.Add(30.5,90.0);//3000
    cout<<d<<"\n";

    obj1.Fun(80,67.78);
    obj1.Fun(67.78,80);

    i=10;
    cout<<"\n"<<i<<"\n";
    cout<<sizeof(i)<<"\n";
    cout<<sizeof(i++)<<"\n";
    cout<<i<<"\n";
    return 0;
}
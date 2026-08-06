#include<iostream>  
using namespace std;

class Demo
{
    public:
    int i, j;
    Demo()
    {
        i=0;
        j=0;
    }        
    Demo(int A, int B)
    {
        i=A;
        j=B;
    }
    Demo(Demo &ref)
    {
        i=ref.i;
        j=ref.j;
    }
};
int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);
    cout<<obj1.i<<"\t"<< obj1.j<<"\n";
    cout<<obj2.i<<"\t"<< obj2.j<<endl;
    cout<<obj3.i<<"\t"<< obj3.j<<endl;
    return 0;
} 
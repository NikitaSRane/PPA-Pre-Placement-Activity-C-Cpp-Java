#include<iostream>
using namespace std;

template<class T>
class Array
{
    public:
    T *Arr;
    int size;

    Array(int length)
    {
        size=length;
        Arr=new T[size];
    }
    
    void Accept()
    {
        cout<<"Enter the values: \n ";
        for(int i=0;i<size;i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        cout<<"Elements of Arrays are: \n";
        for(int i=0;i<size;i++)
        {
            cout<<Arr[i]<<"\n";
        }

    }

};

int main()
{
    Array<int> obj1(5);
    obj1.Accept();
    obj1.Display();

    
    Array<float> obj2(5);
    obj2.Accept();
    obj2.Display();

    Array<double> obj3(5);
    obj3.Accept();
    obj3.Display();

    
    Array<char> obj4(5);
    obj4.Accept();
    obj4.Display();
    
    return 0;
}
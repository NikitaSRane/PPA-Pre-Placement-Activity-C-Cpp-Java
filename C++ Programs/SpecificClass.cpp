#include<iostream>
using namespace std;

class Array
{
    public:
    int *Arr;
    int size;

    Array(int length)
    {
        size=length;
        Arr=new int[size];
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
    Array obj(5);
    obj.Accept();
    obj.Display();
    return 0;
}
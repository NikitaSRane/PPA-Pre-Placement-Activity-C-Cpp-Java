#include<iostream>
using namespace std;

class Array
{
    public:
    int isize;
    int *Arr;

    Array(int ilenght)
    {
        cout<<"Inside constructor.\n";
        isize=ilenght;
        Arr=new int[isize];
    }
    ~Array()
    {
        cout<<"Inside destructor. \n";
        delete []Arr;
    }

    void Accept()
    {
        cout<<"Enter the values\t";
        for(int i=0; i<isize; i++)
        {
            cin>>Arr[i];
        }
    }
    void Display()
    {
        cout<<"Elements of arrays are\t";
        for(int i=0; i<isize; i++)
        {
            cout<<Arr[i]<<"\t";
        }
    }
    int Sum()
    {
        int isum=0;
        for(int i=0;i<isize;i++)
        {
            isum=isum+Arr[i];
        }
        return isum;
    }

};
int main()
{
    int Ans=0;
    cout<<"Inside main \n";
    Array obj1(4);
    obj1.Accept();
    obj1.Display();
    Ans=obj1.Sum();
    cout<<"Summation of all elements: \t"<<Ans<<"\n";
    return 0;
}
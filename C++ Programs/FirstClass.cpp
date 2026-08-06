#include<iostream>
using namespace std;

class Maths // class declaration
{
    public: // access specifier

    // characteristics
    int iNo1; // 4 bytes
    int iNo2; // 4 bytes

    Maths() //default constructor
    {
        cout<<"Inside default constructor \n";
        iNo1=0;
        iNo2=0;
    }
    Maths(int A,int B)
    {
        cout<<"inside parameterized constructor \n";
        iNo1=A;
        iNo2=B;
    }

    ~Maths()
    {
        cout<<"Inside destructor \n";
    }
    //behaviours
    int Addition()
    {
        return iNo1+iNo2;
    }
    int Substraction()
    {
        return iNo1-iNo2;
    }

};

int main()
{   
    cout<<"Inside Main function. \n";
    Maths mobj1; // 8 bytes memory allocates for characteristics (data/variable).location depends on storage class and for behaviours(function) allocates memory in text section
    Maths mobj2(11,10);
    int ret=0;

    ret=mobj2.Addition(); // ret=Addition(&mobj2);
    cout<<"Addition is "<<ret<<"\n";

    ret=mobj1.Addition(); // ret=Addition(&mobj2);
    cout<<"Addition is "<<ret<<"\n";

    ret=mobj1.Substraction();
    cout<<"Substraction is"<<ret<<"\n";

    return 0;
}
#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo()
    {
        cout<<"inside constructor \n";
        x=0;
        y=0;    
    }
    void Fun()
    {
        cout<<"Inside Fun \n";
    }
    ~Demo()
    {
        cout<<"Inside destructor \n";
    }
};

int main()
{
    //Demo obj1; // 8 bytes// static memory allocation
    //dynamic memory allocation
    Demo *ptr=NULL;
    //ptr=new Demo;
    ptr=(Demo *)malloc(sizeof(Demo));

    ptr->Fun();
    cout<<ptr->x<<"\n";
    cout<<ptr->y<<"\n";

    //delete ptr;
    free(ptr);
    return 0;
}
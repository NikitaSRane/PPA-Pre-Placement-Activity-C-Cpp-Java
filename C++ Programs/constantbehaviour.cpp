#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    int j;

    Demo(int x=10, int y=20)
    {
        i=x;
        j=y;
    }

    void Fun()
    {
        i++;
        j++;
    }

    void Gun() const
    {
        i++;
        j++;
    }

};

int main()
{
    Demo obj1;
    Demo obj2(30);
    Demo obj3(40,50);
    obj3.Gun();
    obj3.Fun();
    return 0;
}
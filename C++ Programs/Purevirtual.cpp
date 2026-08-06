#include<iostream>
using namespace std;

class Circle
{
    public:
    float radius;
    float pi;

    Circle()
    {
        radius=0.0;
        pi=3.14;
    }
    Circle(float A, float B)
    {
        radius=A;
        pi=B;
    }
    void Display()
    {
        cout<<"Value of radius "<<radius<<"\n";
    }

    virtual float Area()=0;

    virtual float circum()=0;
};

class Marvellous: public Circle
{
    public:
    float ans;
    Marvellous():Circle()
    {}

    Marvellous(int x, int y): Circle(x,y)
    {}

    float Area()
    {
        float ans=pi*radius*radius;
        return ans;
    }

    float circum()
    {
        
        float ans=2*pi*radius;
        return ans;
    }

};

int main()
{
    Marvellous obj;
    Marvellous obj1(10.89,3.14);

    float ret=0.0;

    ret=obj1.Area();
    cout<<"Area is "<<ret<<"\n";

    ret=obj1.circum();
    cout<<"Circumferance is i:"<<ret<<"\n";
    return 0;
}

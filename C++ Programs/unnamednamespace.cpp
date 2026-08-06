#include<iostream>
#include"header.h" //include header file which contains declarations of namespaces containing class, function
using namespace std;
using namespace Marvellous;

int main()
{
    Demo obj1;
    //Marvellous::Demo obj1;
    obj1.Demo::Fun();
    return 0;
}
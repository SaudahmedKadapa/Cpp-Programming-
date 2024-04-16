#include<iostream>
using namespace std;

class Parent{
    public:
    Parent()
    {
        cout<<"Parent Class "<<endl;
    }
};
class Child : Parent
{
    public:
    Child()
    {
        cout<<"Child Class "<<endl;
    }
};

class GrandChild : Child{
    public:
    GrandChild()
    {
        cout<<"GRand child class !!!"<<endl;
    }
};

int main()
{
    GrandChild g;
    return 0;
}
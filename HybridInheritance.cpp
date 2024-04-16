#include<iostream>
using namespace std;


class Base 
{
    public:
    Base ()
    {
        cout<<"HEllo Base "<<endl;
    }
};

class DerivedOne : public Base
{
    public:
    DerivedOne()
    {
        cout<<"Derived class One "<<endl;
    }

} ;
class DerivedTwo : public Base{
    public:
    DerivedTwo()
    {
        cout<<"Derived Class Two"<<endl;
    }

};
class end : public DerivedTwo,public DerivedOne
{
    public:
    end()
    {
        cout<<"End Class ";
    }
};
int main()
{
    DerivedOne one;
    return 0;
}
#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"A"<<endl;


    }
};
class B : public A{
    public:
    B()
    {
        cout<<"BB"<<endl;

    }
};

class C : public A
{ 
    public:
   C()
   {
    cout<<"CCC"<<endl;

   }
};

int main()
{
    B j;
    C obj;
    return 0;

}
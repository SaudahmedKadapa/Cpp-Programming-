#include<iostream>
using namespace std;

class Parent
{
    public:
    void property(int a,int b)
    {
        int res;
        res=a+b;
        cout<< res;
    }
};
class child:public Parent
{
    public:
    void access()
    {
        cout<<"successfully fetch the data of parent"<<endl;
    }
};

int main()
{
    child c;
    c.property(5,4);

    c.access();

}
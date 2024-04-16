#include<iostream>
using namespace std;

class Parent {
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class Child1 : public Parent{
    public:
    Child1()
    {
        cout<<"Hello Children!!!";
    }
      

};

int main()
{
    Child1 c;

}
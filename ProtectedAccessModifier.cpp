#include<iostream>
using namespace std;

class Parent
{
    protected:
    int id;
};
class child:public Parent{
    public:
    void setid(int id_child)
    {
        id=id_child;

    }
    void display()
    {
        cout<<"id ="<<id;
    }
};

int main()
{
    child obj;
    obj.setid(4);
    obj.display();
    




}
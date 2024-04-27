#include<iostream>
using namespace std;

class Number
{
    int num;                     // instance Variable
    public:
    Number(int n)
    {
        this->num=n;

    }
    Number operator++()
    {
        num+=1;
    }
    void operator--()
    {
        num-=1;
    }
    void display()
    {
        cout<<"number="<<num<<endl;
    }
};

int main()
{
    Number obj(5);
    cout<<"increment value"<<endl;
    ++obj;
    obj.display();
     cout<<"decrement value"<<endl;
     --obj;
     obj.display();
    


}
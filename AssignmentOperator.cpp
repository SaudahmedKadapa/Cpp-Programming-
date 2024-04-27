#include<iostream>
using namespace std;

class Number
{
    public:
    int num1,num2;
    Number()
    {

    }
    Number(int n1,int n2)
    {
        this->num1=n1;
        this->num2=n2;
    }
    void operator=(Number e)
    {
        num1=num2;
    }
    void display()
    {
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
    }
};

int main()
{
    Number obj(5,7);
    Number obj1(6,4);
    obj=obj1;
    obj.display();
    obj1.display();


}
#include<iostream>
using namespace std;

class Number
{
    int num=0;
    public:
    Number(int n)
    {
        this->num=n;
    }
    Number operator+=(int m)
    {
        num=num+m;
    }
    Number operator-=(int m)
    {
        num=num-m;
    }
    void display()
    {
        cout<<"num="<<num<<endl;
    }
};

int main()
{
    Number n1(5);
    n1+=5;
    n1.display();
    n1-=5;
    n1.display();


}
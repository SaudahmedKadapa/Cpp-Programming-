#include<iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
    Complex()
    {

    }
    Complex(int real, int img)
    {
        this->real=real;
        this->img=img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    Complex operator +(Complex &c)
    {
        Complex ans;
        ans.img=img+c.img;
        ans.real=real+c.real;
        return ans;

    }

};

int main()
{
    Complex c1(5,4);
    Complex c2(4,3);
    Complex c3=c1+c2;
    c3.display();

   
    return 0;
}
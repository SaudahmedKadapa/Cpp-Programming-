#include<iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
    Complex()
    {

    }
    Complex(int r,int i)
    {
        this->img=i;
        this->real=r;
    }
    Complex operator-(Complex &c)

    {
        Complex result;
        result.img=img-c.img;
        result.real=real-c.real;
        return result;
    }
    void display()

    {
        cout<<"result ="<<real<<"-"<<img<<"i"<<endl;
    }


};


int main()
{
    Complex c1(4,5);
    c1.display();
    Complex c2(6,6);
    c2.display();
    Complex c3;
    c3=c1-c2;
    c3.display();
}
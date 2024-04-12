#include<iostream>
using namespace std;

class Complex 
{
    int real,img;

    public:
    Complex(){

    }
    Complex(int r,int i)
    {
        this->img=i;
        this->real=r;
    }
    Complex operator+(Complex &c)
    {
        Complex result;
        result.real=real+c.real;
        result.img=img+c.img;
        return result;
    }
    void display()
    {
        cout<<"result="<<real<<"+"<<img<<"i"<<endl;
    }

};

int main()
{
    Complex c1(1,4);
    c1.display();
    Complex c2(5,7);
    c2.display();
    Complex c3;
    c3=c1+c2;
    c3.display();

    
}
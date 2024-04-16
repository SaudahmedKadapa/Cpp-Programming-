#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public:
    Complex()
    {

    }
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;

    }
    void display()
    {
        cout<<real<<"-"<<img<<"i"<<endl;
    }
    Complex operator-(Complex &b)
    {
        Complex ans;
        ans.real=real-b.real;
        ans.img=img-b.img;
        return ans;
    }

};


int main()
{
    Complex c1(4,5);
    Complex c2(1,2);
    Complex c3=c1-c2;
    c3.display();

}
#include<iostream>
using namespace std;

class Rectangle 
{
    public:
    int l;
    int b;

    Rectangle()                       //Default Constructor 
    {
        l=0;
        b=0;
    }

    Rectangle(int x,int y)          //Parametrized Constructor 
    {
        l=x;
        b=y;
    }

    Rectangle(Rectangle& r)

    {
        l=r.l;
        b=r.b;
    }

    ~Rectangle()     // Destructor
    {
        cout<<"Destructor  is called"<<endl;;
    }
};

int main()
{
    Rectangle r1;
    cout<<r1.b<<" "<<r1.l<<endl;

    Rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;


}
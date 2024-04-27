#include<iostream>
using namespace std;

class Short
{
    public:
    int num;

    Short(int n)
    {
        this->num=n;

    }
    Short operator+=(int m)
    {
        num=num+m;
        return num;


    }
    Short operator-=(int d)
    {
        num=num-d;
        return num;

    }
    void display()
    {
        cout<<"updated value  ="<<num<<endl;
    }
};


int main()
{
    Short s(2);
    s+=2;
    s.display();

    Short s1(5);
    s1-=10;
    s1.display();
    


}
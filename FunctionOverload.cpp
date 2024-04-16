#include<iostream>
using namespace std;

class Addition{
    public:
    void add(int x,int y)
    {
        int sum =x+y;
        cout<<sum<<endl;

    }

    void add(int x, int y , int z)
    {
        int sum =x+y+z;
        cout<<sum;
    }

    void add(float x ,float y)
    {
       float sum = x+y;
       cout<<sum;

    }
};

int main()
{
    Addition a;
    a.add(5,6);
    a.add(6,7);
    a.add(float (5.5),float (6.5));

    return 0;
}
#include<iostream>
using namespace std;
template <class T>

T swap1(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=10;
    int y=20;
    cout<<"Before Swap ="<<x<<y<<endl;
    char a='A',b='B';
    swap1(a,b);
    cout<<a<<b<<endl;


}
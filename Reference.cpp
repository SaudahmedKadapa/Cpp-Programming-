#include<iostream>
using namespace std;
int main()
{
    cout<<"Before Increment "<<endl;
    int a=10;
    int &b=a;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    cout<<"After the Increment "<<endl;
    ++a;
    cout<<"a="<<a<<" "<<"b="<<b;


    

}
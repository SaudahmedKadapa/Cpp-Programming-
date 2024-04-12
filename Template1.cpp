#include<iostream>
using namespace std;
template <class Z>
 Z multi (Z &a,Z &b)
 {
    Z result=a*b;
    return result;
 }

int main()
{
    int d=5;
    int g=6;
    cout<<"Multiplication of two number ="<<multi(d,g);
    

}
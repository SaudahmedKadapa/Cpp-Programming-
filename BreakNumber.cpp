#include<iostream>
using namespace std;

int main()
{
    int num,n1,n2,n3;
    cout<<"Enter the number ="<<endl;
    cin>>num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    cout<<num*1000<<"+"<<n3*100<<"+"<<n2*10<<"+"<<n1<<endl;



}
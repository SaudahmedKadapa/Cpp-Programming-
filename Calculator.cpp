#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter the number:"<<endl;
    cin >> a;
    cin >> b ;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b <<endl;
    cout<<"Select the operator + - / * :"<<endl;

    cout<<"ADDITION press 1"<<endl;
    cout<<"SUBSTRACTION press 2"<<endl;
    cout<<"DIVISON press 3"<<endl;
    cout<<"MULTIPLICATION press 4"<<endl;

     int op;
    cin >> op;

    switch (op)
    {

    case 1 :
    c=a+b;
    cout<<"c= " <<c <<endl; 
    break;

    case 2: 
    c=a-b;
    cout <<"c= "<<c<<endl;
    break;
    
    case 3:
    c= a/b;
     cout <<"c= "<<c<<endl;
    break;

    case 4:

    c=a*b;
     cout <<"c= "<<c<<endl;
    break;

    default:
    cout <<" the invalid !!!!";
    }
    
    return 0;


    
    
}
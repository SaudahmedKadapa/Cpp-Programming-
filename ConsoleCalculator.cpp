#include<iostream>
using namespace std;

int main()
{
    cout<<"-------------Calculator---------"<<endl;
    char op;
    cout<<"Enter the Operation="<<endl;
    cin>>op;
    double num1,num2,res;
    cout<<"Enter the First Number ="<<endl;
    cin>>num1;
    cout<<"Enter the Scond number="<<endl;
    cin>>num2;

    cout<<num1<<op<<num2<<"="<<endl;

    switch (op)
    {
    case '+':
    res=num1+num2;
    cout<<"res="<<res<<endl;
    break;

    case '-':
     res=num1-num2;
    cout<<"res="<<res<<endl;
    break;

    case '*':
     res=num1*num2;
    cout<<"res="<<res<<endl;
    break;

    case '/':
     res=num1/num2;
    cout<<"res="<<res<<endl;
    break;


        break;
    
    default:
    cout<<"INvalid !! Retry .";
        break;
    }
    
}
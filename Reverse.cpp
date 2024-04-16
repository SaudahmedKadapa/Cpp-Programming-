#include<iostream>
using namespace std;

int main()
{
    int num;
    int reman,reverse=0;
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    while(n!=0)
    {
        
        reman=n%10;
        reverse=reverse*10+reman;
        n/=10;
        
    }
    cout<<"Reverse the number ="<<reverse<<endl;
}
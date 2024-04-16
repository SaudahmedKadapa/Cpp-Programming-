#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number ="<<endl;
    cin>>n;
    bool check=true;
    if(n==0||n==1){
        return false ;
    }
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            check=false;
            break;
        }
    }
    if(check)
    {
        cout<<n << " is a prime number"<<endl;
    }
    else 
    {
        cout<<n << " is not a prime number "<<endl;
    }
}
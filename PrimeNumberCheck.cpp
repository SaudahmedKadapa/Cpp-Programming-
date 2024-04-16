#include<iostream>
using namespace std;

int main()
{
    int num,i,count=0;
    cout<<"Enter the number "<<endl;
    cin>>num;
    if(num==0)
    {
        cout<<num << " is not a prime number "<<endl;
    }
    else{
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        if(count>1)
        {
            cout<<num <<" is not a prime number "<<endl;
        }
        else{
            cout<<num <<" is prime number "<<endl;
        }
    }
    return 0;
}
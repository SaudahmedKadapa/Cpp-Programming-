#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int num;
    cout<<"Enter the number="<<endl;
    cin>>num;
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for(i=num;i>0;i--)
    {
        for(j=1;j<=num-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}
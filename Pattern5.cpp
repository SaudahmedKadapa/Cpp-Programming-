#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int num;
    int cont=0;
    cout<<"Enter the number ="<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            cout<<j;
            
            
        }
        cont++;
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of Rows="<<endl;
    cin>>rows;
    cout<<"Floyd Triangle of"<<rows<<endl;

    int count=1;
    for(int i =0;i<=rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<(count++)<<" ";
        }
        cout << endl;
    }
    return 0;
}
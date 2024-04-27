#include<iostream>
using namespace std;
template<class t>

t pattern(t c)
{
    int i,j;
    for(i=0;i<=c;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}



int main()
{
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    pattern(n);
    return 0;
    

}
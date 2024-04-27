#include<iostream>
using namespace std;

template<class T>

T Even (T &e)
{
    for(int i=0;i<e;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;;
        }
    }
}



int main()
{
    cout<<"Enter the number till even number want"<<endl;
    // int num;
    float n;
    cin>>n;
    cout<<"even number are="<<Even(n)<<endl;
    return 0;



}
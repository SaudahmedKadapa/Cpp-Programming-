#include<iostream>
#include<string>
using namespace std;

void Reversestring(string &name)
{
    int n=name.length();
    for(int i=0;i<n/2;i++)
    {
        swap(name[i],name[n-i-1]);
    }
}

int main()
{
    string name;
    cout<<"Enter the string ="<<endl;
    cin>>name;
    Reversestring(name);
    cout<<name;
    return 0;
    
}
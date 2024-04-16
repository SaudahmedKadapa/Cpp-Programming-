#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number ="<<endl;
    cin>>num ;
    if(num %num !=0)
    {
        cout<< num << " is Prime number ";
    } 
    else{
        cout<< num <<" is not a Prime Number";
    }
    return 0;
}
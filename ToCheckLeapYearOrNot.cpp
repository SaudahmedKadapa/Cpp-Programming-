#include<iostream>
using namespace std;

int main()
{
    int year ;
    cout<<"Enter the Year ="<<endl;
    cin>>year;
    if(year%400==0 )
    {
         cout<<year <<" year is the leap year ";

    }
     else if(year%4==0)
    {
         cout<<year <<" year is the leap year ";

    }
    else 
    {
        cout<<year <<" year is the not leap year ";
    }
    return 0;
}
#include<iostream>
using namespace std;
template<class T>

T Leap(T &y)
{
    if(y%400==0)
    cout<<"LEap year"<<endl;
    else
    cout<<"is not a leap year"<<endl;
   

};

int main()
{
    double year;
    
    cout<<"Enter the year="<<endl;
    cin>>year;
    cout<<Leap(year);
     return 0;


}
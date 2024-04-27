#include<iostream>
using namespace std;
template<typename T>

T Swap(T a,T b)
{
   int temp=0;
   temp=a;
   a=b;
   b=temp;
   cout<<"After the swaping "<<a<<" "<<b;

}




int main()
{
    int num1,num2;
    cout<<"Enter the 1st number "<<endl;
    cin>>num1;
    cout<<"Enter the 2nd number "<<endl;
    cin>>num2;

    cout<<" before the swapping"<<num1<<" "<<num2<<endl;
    Swap(num1,num2);
    


    
}
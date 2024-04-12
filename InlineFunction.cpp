#include<iostream>
using namespace std;
inline int square(int a)
{
    for(int i =0;i<=5;i++)
    {
        cout<<"helo world"<<endl;
    }
}
inline int cube (int b)
{
    return b*b*b;
}

int main()
{
    cout<<"Sqaure= "<<square(9)<<endl;
    cout<<"cube ="<<cube(2);

}
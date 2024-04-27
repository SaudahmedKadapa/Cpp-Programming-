#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[]={1,2,3,5,9,2,4,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[j];
            }
        }
    }

}
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={5,2,3,8,9};
    int a=0,i,j;
    for(int i=0;i<arr[5];++i)
    {
        for(int j=i+1;j<5;++j)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[j];

    }

}
#include<iostream>
using namespace std;



int main()
{
    int i,j;
    int arr[7]={1,5,4,7,8,2,3};
    int len=sizeof(arr)/sizeof(arr[0]);   //7/1=7
    for(i=0;i<len;i++)
    {
        for(j=(i+1);j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<=len;i++)
    {
        cout<<arr[i]<<endl;
    }

}
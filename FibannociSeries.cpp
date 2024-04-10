#include<iostream>
using namespace std;

class Fibanocci
{
    int n;
    int i;
    int num1=0,num2=1;
    int nextterm;
    int count =0;
    public:
    void Number(int n)
    {
        cout<<"The Fibanocci Series:-"<<endl;
      for(i=0;i<=n;i++)
      {
        cout<<num1;;
        nextterm=num1+num2;
        num1=num2;
        num2=nextterm;
        count++;
        


      }
       

    }

    

};


int main()
{
    Fibanocci f1;
    f1.Number(5);

    return 0;
}
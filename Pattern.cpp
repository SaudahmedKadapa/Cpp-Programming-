#include<iostream>
using namespace std;

class Pattern
{
public:
void structure()
{
    int i,j;
    int n;
    cout<<"Enter the number of rows ="<<endl;
    cin>>n;
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=i;j++)     
        {
            cout<<"*";

        }
        cout<<"\n";
    }

    
}
};

int main()
{
    Pattern p ;
    p.structure();
    

}

#include<iostream>
using namespace std;

int main()
{
    int rows,cols;
    cout<<"Enter the number Rows="<<endl;
    cin>>rows;

    cout<<"Enter the number Columns = "<<endl;
    cin>>cols;

    cout << "The dimension of Rectangle is "<<rows <<"*"<<cols<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if (i == 0 || i==rows-1 || j == 0 || j==cols-1)
            {
                cout<<"*";
            }
            else {
                cout<< " ";
            }
            
        }

        cout<<endl;
       

    }
     return 0;
}
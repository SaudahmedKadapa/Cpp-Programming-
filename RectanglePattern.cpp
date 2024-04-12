#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of Rows"<<endl;
    cin >> rows;

    int cols;
    cout<<"Enter the number of Columns"<<endl;
    cin >> cols;

    cout<<"the Rectangle pyramid of "<<rows <<"*"<<cols << endl;

    for(int i =0;i < rows;i++)
    {
        for (int j=0;j < cols;j++)
        {
            cout<<"*";

        }
        cout<<endl;

    }
    return 0;
}

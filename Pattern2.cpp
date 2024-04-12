#include<iostream>
using namespace std;

class Pattern{
    int num;
    public:
    void Triangle(int a)
    {
        int i,j;
        for(i=0;i<=a;i++)
        {
            for(j=0;j<i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }

};



int main(void)
{
    Pattern p1;
    p1.Triangle(5);
   
   



}
#include<iostream>
using namespace std;
int count=0;

class Animal
{
    
    public:
    Animal()
    {
        count ++;
        cout<<"Object is Created "<<count<<endl;
    }
    ~Animal()  //Destructor 
    {
        count--;
        cout<<"Object is Remove "<<count<<endl;
    }
};


int main()
{
    Animal a,b,c;
    {
        Animal d;
    }
    return 0;

}
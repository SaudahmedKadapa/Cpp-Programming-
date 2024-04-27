#include<iostream>
using namespace std;

class Player
{
    public:
    Player()
    {
        cout<<"hi I am the Constructor player"<<endl;
    }
    ~Player()
    {
        cout<<"ok then i am the Destructor player"<<endl;
    }
};

int main()
{
    Player obj;

}
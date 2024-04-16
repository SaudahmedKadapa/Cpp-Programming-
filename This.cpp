#include<iostream>
using namespace std;

class Game
{
    
    int num;    // instance variable 
    
    public:
    void show(int n)

{
    this->num=n;
    cout<<n;
}


};

int main()
{
    Game g;
    g.show(20);
    

}
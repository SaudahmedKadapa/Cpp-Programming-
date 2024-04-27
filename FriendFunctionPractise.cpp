#include<iostream>
using namespace std;

class Player
{
    int priv;
    protected:
    int protv;
    
    public:
    Player()
    {
        priv=10;
        protv=20;
    }
    friend class Cricket;

};
class Cricket
{
    public:
    void play(Player &t)
    {
        cout<<"the value of private variabe="<<t.priv<<endl;
        cout<<"the value of protected variable="<<t.protv<<endl;
    }

};


int main()
{
    Player p;
    Cricket c;
    c.play(p);

}
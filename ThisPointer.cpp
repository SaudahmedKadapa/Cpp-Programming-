#include<iostream>
using namespace std;

class Player
{
    int num;      // instance variable Or Class Variable
    char naam[10];
    public:
    
    void set(int x,char s[10])
{
   this->num=x;
  // this->naam=s;


}
void print()
{
    int x;
    char s[10];
    cout<<x;
    cout<<s;
}

};



int main()
{
    Player p;
    p.set(1,"Saud");
    p.print();


    return 0;
}
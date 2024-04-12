#include<iostream>
using namespace std;
class Ankit;
class ankush
{
    private:
    int money=10;
    friend void rohit(Ankit,ankush);
};
class Ankit
{
    private:
    int money =20;
    friend void rohit(Ankit,ankush);
};
void rohit(Ankit r1,ankush r2)
{
    cout<<"Sum="<<r1.money+r2.money;
}
int main()
{
    
    Ankit obj2;
    ankush obj1;
    rohit(obj2,obj1);

}
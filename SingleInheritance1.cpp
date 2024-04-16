#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {

        cout << "Hello Child"<<endl;
    }
};
class Child : public Parent
{
public:
    Child()
    {

        cout << "Yess Dad!!";
    }
};

int main()
{
    Child c;
    return 0;
}
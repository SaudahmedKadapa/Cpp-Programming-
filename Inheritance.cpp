#include<iostream>
using namespace std;

class Animal {
    public:
    void sound()
    {
        cout<<"Some weird Sound !!"<< endl;
    }
};
class Dog : Animal{
    public : 
    void sound()
    {
        cout<<"Woof Wooof !!"<< endl;

    }
};
class cat : Animal 
{
    public :
    void sound()
    {
        cout<<"Meow Meow !!"<<endl;
    }
    
    
};


int main()
{
    Animal an;
    Dog doo;
    cat Ca;
    
    doo.sound();
    Ca.sound();

    return 0;
  


}

#include<iostream>
using namespace std;

class number
{
    int num;
    public:
   
    number(int n);

    void display();
    bool operator==(number c);

    
};

number::number(int n)
{
    num=n;


}
bool number:: operator==(number c)
{
    if(num==c.num)
    {
      
        return true;
    }
    else{
    
        return false;
    }


}
void number::display()
{
    cout<<"the value of n="<<num<<endl;
};

int main()
{
    number obj(5);
    number obj1(6);
    obj==obj1;
    obj.display();
    if(obj==obj1)
    {
        cout<<"Both are equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }

    

}
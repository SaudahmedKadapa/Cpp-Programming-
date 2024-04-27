#include<iostream>
using namespace std;

class Father
{
    public:
    Father()
    {
        cout<<"THe property of FAther"<<endl;
    }
};
class daughter:public Father
{
    public:
    daughter()
    {
        cout<<"The property of mother"<<endl;
    }
};
class boy:public  Father
{
    public:
    boy()
    {
        cout<<"Boy"<<endl;
    }
};
class Child:public boy,public daughter{
    public:
    Child()
    {
        cout<<"total Child"<<endl;
    }

};


int main()
{
    Child obj;
    


}
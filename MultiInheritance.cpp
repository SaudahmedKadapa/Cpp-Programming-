#include<iostream>
using namespace std;

class Company 
{
    public:
    Company()
    {
        cout<<"The Company Name \"Amazon\" "<<endl;

    }


};
class CEO : virtual public Company
{
    public:

    CEO()
    {
    cout<<"Ceo of the Commpany"<<endl;
    }


};
class Manager:virtual public Company
{
    public:
    Manager()
    {
        cout<<"Manager"<<endl;
    }
};
class Employee: public Manager,public CEO
{
    public:
    Employee()
    {
        cout<<"Employee "<<endl;
    }
};
int main()
{
    Employee obj;


}
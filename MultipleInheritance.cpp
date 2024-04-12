#include<iostream>
using namespace std;


class Company
{
    public:
    Company()
    {
        cout<<"Company"<<endl;
    }

};
class Manager
{
    public:
    Manager()
    {
        cout<<"Manager of the COmpany"<<endl;
    }
};

class Employee : public Company,public Manager
{
    public:
    Employee()
    {
        cout<<"Employee";
    }

};
int main()
{
    Employee e;
    return 0;

}
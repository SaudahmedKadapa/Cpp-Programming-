#include<iostream>
using namespace std;

class Person
{
    int age;
    string name;
    public:
    Person()
    {

    }
    Person(int a,string n)
    {
        this->age=a;
        this->name=n;
    }
    friend ostream &operator <<(ostream &output,Person &p);
    friend istream &operator >>(istream &input,Person &p);

};
ostream &operator <<(ostream &output,Person &p)
{
    output << "What the hack "<<endl;
    output<<"my name is "<<p.name<<"and my age is "<<p.age<<endl;
    return output;
}
istream &operator >>(istream &input,Person &p)
{
    input >>p.name;
    input>>p.age;
    return input;
}

int main()
{
    cout<<"Enter the name and age "<<endl;
    Person obj;
    cin>>obj;
    cout<<obj;
    return 0;

}
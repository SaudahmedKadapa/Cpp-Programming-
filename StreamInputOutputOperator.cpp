#include<iostream>
using namespace std;

class Boy
{
    public:
    int marks;
    string name;
    Boy()
    {

    }

    Boy(int m,string n)
    {
        this->marks=m;
        this->name=n;

    }
    friend ostream &operator <<(ostream &output,Boy &b);
    friend istream &operator >>(istream &input,Boy &b);

};
ostream &operator <<(ostream &output,Boy &b)
{
    output << "My name is "<<b.name<<endl;
    output <<"Roll no is "<<b.marks<<endl;
    return output;
    

}
istream &operator <<(istream &input,Boy &b)
{
    input >> b.name;
    input >>b.marks;
    return input;
}

int main()
{
    Boy b;
    cout<<"Dispaly name of student ="<<endl;
    cin>>b;
    cout<<b;
    return 0;
    

}
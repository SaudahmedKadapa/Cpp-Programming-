#include<iostream>
using namespace std;

class School
{
    public:
    void student()
    {
        cout<<"Study"<<endl;
    }
    void student(char s[20])
    {
        // cin>>s;
        cout<<"Name of the Student "<<s<<endl;

    }
    void student(float percent)
    {
        // cin>>percent;
        cout<<"Percent ="<<percent;
    }

};

int main()
{
    School s;
    s.student();
    s.student("saud Ahmed");
    s.student(85.66);
    return 0;
}
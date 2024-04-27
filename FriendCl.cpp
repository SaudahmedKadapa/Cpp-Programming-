#include<iostream>
using namespace std;

class Student 
{
    private:
    int rollno;

    protected:
    string name;
    public:


    
    Student()
    {
        rollno=45;
        name="Saud";
    }
    friend class authority;
    
};
class authority
{
    public:
    void info(Student &s)
    {
        cout<<"Name of student="<<s.name<<endl;
        cout<<"Roll no of student"<<s.rollno<<endl;

    }



};


int main()
{
    Student objs;
    authority a;
    a.info(objs);
    return 0;

}
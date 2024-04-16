#include <iostream>
using namespace std;

class Chairman
{
public:
    Chairman()
    {

        cout << "Chairman" << endl;
    }
};
class Headmaster : public Chairman
{
protected:
    Headmaster()
    {
        cout << "Headmaster" << endl;
    }
};
class Teacher : public Headmaster
{
protected:
    Teacher()
    {
        cout << "Teacher" << endl;
    }
};
class Student : public Teacher
{
public:
    Student()
    {
        cout << "Student";
    }
};

int main()
{
    Student obj;
    return 0;
}
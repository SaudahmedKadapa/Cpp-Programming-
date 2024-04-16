#include<iostream>
using namespace std;

class Circle {
   


    public:
     double rad;
    double Area()
    
    {
        
        return 3.14*(rad*rad);

    }
   
};

int main()
{
    Circle obj;
    obj.rad=5.5;
    cout<<"Radius is="<<obj.rad<<endl;
    cout<<"Area is ="<<obj.Area();
    
    return 0;

}
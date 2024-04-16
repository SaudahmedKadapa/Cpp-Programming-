#include<iostream>
using namespace std;
class Amir;
class Ahmed
{
    private:
    int value =5;
    void homework()
    {
        cout<<"Ahmed completed the homework"<<endl;
    }
    friend void adnan(Ahmed,Amir);
};
class Amir

{
    private:
    int value=5;
    void study()
    {
        cout<<"Amir is doing study "<<endl;
    }
    friend void adnan(Ahmed,Amir);
};
void adnan(Ahmed a1, Amir a2)
{
    cout<<"sum="<<a1.value+a2.value<<endl;
    

    

}

int main()
{
    Ahmed obj1;
    Amir obj2;
  
    adnan(obj1,obj2);
    

    

    
    return 0;
}
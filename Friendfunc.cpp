#include<iostream>
using namespace std;

class base
{
    private:
    int priv;
    protected:
    int protv;

    public:
    base()
    {
        priv=20;
        protv=30;
    }
    friend void mode(base &b);

};

    
    void mode(base& b)
    {
        cout<<"Private value ="<<b.priv<<endl;
        cout<<"Protected value ="<<b.protv<<endl;
    }



int main()
{
    base b;
    mode(b);
    
   
    return 0;


}
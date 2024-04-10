#include<iostream>
using namespace std;

class Max
{
    int num1,num2;
    public :
    void MysetValue(int x,int y);
    int getValue();


};
void Max::MysetValue(int x,int y)
{
    //int x, y;
    num1=x;
    num2=y;


}






int main()
{
    Max m;
    m.MysetValue(4,5);
    




    return 0;

}
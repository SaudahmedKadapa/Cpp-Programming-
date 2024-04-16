#include<iostream>
using namespace std;

class Fruit
{
    public:
    static int fruitCounter;
   Fruit()
   {
    fruitCounter++;

   }
   ~Fruit()
   {
    fruitCounter--;
   }
    


};
class Apples:public Fruit{
    public:
    static int appleCounter;
   Apples()
   {
    appleCounter++;

   }
   ~Apples()
   {
    appleCounter--;
   }


};
class Mangoes:public Fruit{
    public:
    static int mangoCounter;
    Mangoes()
    {
        mangoCounter++;
    }
    ~Mangoes()
    {
        mangoCounter--;
    }

};
int Fruit::fruitCounter=0;
int Apples::appleCounter=0;
int Mangoes::mangoCounter=0;

int main()
{
    Apples first,second;
    Mangoes fi,se;
    cout<<"Total Number of Fruits="<<Fruit::fruitCounter<<endl;
    cout<<"total number of apples="<<Apples::appleCounter<<endl;
    cout<<"Total number of Mangoes="<<Mangoes::mangoCounter<<endl;



}
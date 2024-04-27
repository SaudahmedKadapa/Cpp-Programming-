#include <iostream>
using namespace std;

class Mammals
{
public:
    Mammals()
    {
        cout << "I am Mammals" << endl;
    }
};
class MarineAnimals
{
public:
    MarineAnimals()
    {
        cout << "I am Marine Animals" << endl;
    }
};

class Bluewhale : public Mammals, public MarineAnimals
{

public:
    Bluewhale()
    {
        cout << "I am the Blue Whale " << endl;
    }
};

int main()
{
    Bluewhale b;
    // b.whale();
    // b.working();
    // b.func();

    return 0;
}
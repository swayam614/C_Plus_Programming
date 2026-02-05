#include <iostream>
using namespace std;

class Bulb
{
    int wattage;

public:
    void setWattage(int wattage)
    {
        this->wattage = wattage;
    }

    int getWattage()
    {
        return this->wattage;
    }
    Bulb(int wattage)
    {
        cout << "Parameterized constructor is invoked" << endl;
        this->wattage = wattage;
    }
};

int main()
{
    Bulb g = 60; // this line is also get converted into this Bulb g(60); done by compiler
    cout << g.getWattage() << endl;
    return 0;
}
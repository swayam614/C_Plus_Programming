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
    Bulb()
    {
        cout << "Default Constructor is invoked" << endl;
    }
    Bulb(int wattage)
    {
        cout << "Parameterized constructor is invoked" << endl;
        this->wattage = wattage;
    }
    Bulb(const Bulb &v)
    {
        cout << "Copy Constructor is invoked" << endl;
        this->wattage = v.wattage;
    }
};

int main()
{
    Bulb k;
    Bulb m;
    k = m;
    return 0;
}
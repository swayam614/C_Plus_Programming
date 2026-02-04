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
    k.setWattage(60);
    Bulb g = 100;
    Bulb m = g;
    cout << k.getWattage() << endl;
    cout << g.getWattage() << endl;
    cout << m.getWattage() << endl;
    return 0;
}
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
        this->wattage = wattage;
        cout << "Parameterized constructor is invoked" << endl;
    }
    Bulb(const Bulb &v)
    {
        cout << "Copy Constructor is invoked" << endl;
        this->wattage = v.wattage;
    }
};

int main()
{
    Bulb();
    Bulb(60);
    return 0;
}

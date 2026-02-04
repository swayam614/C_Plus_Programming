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
    Bulb(const Bulb &v)
    {
        cout << "Copy Constructor is invoked" << endl;
        this->wattage = v.wattage;
    }
    Bulb &operator=(Bulb &other)
    {
        cout << "operator = got invoked" << endl;
        this->wattage = other.wattage;
        return *this;
    }
};

int main()
{
    Bulb k;
    k = 60;
    return 0;
}

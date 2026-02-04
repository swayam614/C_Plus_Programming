#include <iostream>
using namespace std;

class Bulb
{
private:
    int w;

public:
    void setWattage(int w);
    int getWattage();
};

void Bulb::setWattage(int w)
{
    this->w = w;
}

int Bulb::getWattage()
{
    return this->w;
}

int main()
{
    Bulb b;
    b.setWattage(60);
    cout << b.getWattage() << endl;
    return 0;
}
#include <iostream>

class Bulb
{
    int w;

public:
    void setWattage(int e)
    {
        w = e;
    }
    int getWattage()
    {
        return w;
    }
};

int main()
{
    Bulb k;
    Bulb t(60);
    return 0;
}
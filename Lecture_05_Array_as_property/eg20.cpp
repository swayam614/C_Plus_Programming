#include <iostream>

class Bulb
{
private:
    int w;

public:
    void getWattage(int e)
    {
        if (e >= 0 && e <= 240)
            w = e;
        else
            w = 0;
    }

    int *getWattage()
    {
        return &w;
    }
};

int main()
{
    Bulb g;
    int *p;
    p = g.getWattage();
    *p = -100;
    return 0;
}
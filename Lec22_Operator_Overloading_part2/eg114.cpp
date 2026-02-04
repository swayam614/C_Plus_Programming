#include <stdio.h>

class Bulb
{
    int price;
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

    void setPrice(int price)
    {
        this->price = price;
    }

    int operator<(Bulb &v)
    {
        return this->price < v.price;
    }
};

int main()
{
    Bulb g, t;
    g.setWattage(60);
    g.setPrice(100);
    t.setPrice(1000);
    t.setWattage(500);

    if (g < t)
    {
        printf("Price of g is less than that of t\n");
    }
    else
    {
        printf("Price of g is not less than that of t\n");
    }
    return 0;
}
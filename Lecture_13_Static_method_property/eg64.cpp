#include <iostream>

using namespace std;

class Bulb
{
private:
    int w;
    static int p;

public:
    void setWattage(int e)
    {
        w = e;
    }
    int getWattage()
    {
        return w;
    }
    void setPrice(int e)
    {
        p = e;
    }
    int getPrice()
    {
        return p;
    }
};

int Bulb::p;
int main()
{
    Bulb g, t;
    g.setWattage(60);
    g.setPrice(90);
    cout << "Wattage : " << g.getWattage() << endl;
    cout << "Price : " << g.getPrice() << endl;
    t.setWattage(70);
    t.setPrice(190);
    cout << "Wattage : " << t.getWattage() << endl;
    cout << "Price : " << t.getPrice() << endl;
    cout << "Wattage : " << g.getWattage() << endl;
    cout << "Price : " << g.getPrice() << endl;

    return 0;
}
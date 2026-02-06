#include <iostream>

using namespace std;

class Bulb
{
private:
    int w;

public:
    Bulb()
    {
        w = 0;
    }
    Bulb(int e)
    {
        w = e;
    }

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
    Bulb g;
    Bulb t(60);
    Bulb m(t);
    cout << "Wattage : " << g.getWattage() << endl;
    cout << "Wattage : " << t.getWattage() << endl;
    cout << "Wattage : " << m.getWattage() << endl;
    return 0;
}
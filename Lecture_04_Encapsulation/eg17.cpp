#include <iostream>

using namespace std;
class Bulb
{
private:
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
    Bulb g; //  g is an object of type bulb
    g.setWattage(90);
    cout << "Wattage : " << g.getWattage() << endl;

    Bulb k, w;
    k.setWattage(900);
    w.setWattage(890);
    cout << k.getWattage() << endl;
    cout << w.getWattage() << endl; 

    return 0;
}
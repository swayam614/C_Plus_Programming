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
    // this is the problem like any bulb wattage cant be negative isse woh invalid state me chale jaye ga
    // solution in next file eg19.cpp
    g.setWattage(-1);
    cout << "Wattage : " << g.getWattage() << endl;
    return 0;
}
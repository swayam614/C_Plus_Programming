#include <iostream>

using namespace std;
class Bulb
{
    int w = 0;

public:
    void getWattage(int e)
    {
        if (e >= 0 && e <= 240)
            w = e;
        else
            w = 0;
    }
    int getWattage()
    {
        return w;
    }
};

int main()
{
    Bulb g; // yaha per object bante se hi inavlid state me jara he so humko phele se koi value initliazie karni hogi so that ki woh invalid state me jaye
    cout << g.getWattage() << endl;
}
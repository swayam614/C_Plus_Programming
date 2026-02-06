#include <iostream>

using namespace std;
class Bulb
{
    int w;

public:
    void initliazie()
    {
        w = 0;
    }
    //  but iss bar ki ky gurantee he ki user phele initliazie method chale yee gaa
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
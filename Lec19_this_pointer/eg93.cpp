#include<iostream>

using namespace std;

class Bulb
{
private:
    int w;
public:
    void setWattage(int w)
    {
        this->w = w;
    }
    int getWattage()
    {
        return w;
    }
};



int main()
{
    Bulb g;
    g.setWattage(60);
    cout << g.getWattage() << endl;
    
    return 0;
}
#include <iostream>

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
    class Bulb g; //  g is an object of type bulb
    g.w = 100;    // this line wont compile , w is encapsulated and hence
                  // cannot be accessed from outside the class 

    return 0;
}
#include <iostream>
using namespace std;

class aaa
{
private:
    int x;

protected:
    int y;

public:
    int z;
};

class bbb
{
public:
    void sam()
    {
        aaa a;
        a.x = 10;
        a.y = 20;
        a.z = 30;
    }
};

class ccc : public aaa
{
public:
    void joy()
    {
        x = 10;
        y = 20;
        z = 30;
    }
};

int main()
{
    aaa a;
    a.x = 10;
    a.y = 20;
    a.z = 30;
    return 0;
}

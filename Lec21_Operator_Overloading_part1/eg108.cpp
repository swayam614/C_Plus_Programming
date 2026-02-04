#include <stdio.h>

class Monitor
{
public:
    void operator<<(int x)
    {
        printf("%d", x);
    }

    void operator<<(const char *x)
    {
        printf("%s", x);
    }

    void operator<<(double x)
    {
        printf("%lf", x);
    }

    void operator<<(float x)
    {
        printf("%f", x);
    }
};

namespace swayampalrecha
{
    Monitor mout;
};
using namespace swayampalrecha;

int main()
{
    mout << 10;
    mout << "swayam";
    mout << 23.23f;
    mout << 23.33;
    mout << 'A';
    return 0;
}
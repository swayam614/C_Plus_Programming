#include <stdio.h>

class Monitor
{
public:
    Monitor &operator<<(int x)
    {
        printf("%d", x);
        return *this;
    }

    Monitor &operator<<(const char *x)
    {
        printf("%s", x);
        return *this;
    }

    Monitor &operator<<(double x)
    {
        printf("%lf", x);
        return *this;
    }

    Monitor &operator<<(float x)
    {
        printf("%f", x);
        return *this;
    }

    Monitor &operator<<(char x)
    {
        printf("%c", x);
        return *this;
    }

    Monitor &operator<<(void (*p)())
    {
        p();
        return *this;
    }
};

namespace swayampalrecha
{
    void newLine()
    {
        printf("\n");
    }
    Monitor mout;
};
using namespace swayampalrecha;

int main()
{
    mout << 10 << newLine << 20 << newLine << "Swayam" << newLine << 23.23f << newLine << 23.23 << newLine << 'a' << newLine;
    return 0;
}
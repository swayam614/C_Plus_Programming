#include <iostream>

using namespace std;
class aaa
{
public:
    aaa()
    {
        cout << "Hello from aaa" << endl;
    }
};

class bbb : public aaa
{
public:
    bbb()
    {
        cout << "Hello from bbb" << endl;
    }
};
int main()
{
    bbb b;
    return 0;
}
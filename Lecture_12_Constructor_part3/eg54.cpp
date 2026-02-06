#include <iostream>

using namespace std;

class aaa
{
public:
    aaa()
    {
        cout << "Base Class Default Construtor" << endl;
    }
};

class bbb : public aaa
{
public:
};

int main()
{
    bbb g;
    bbb k(g);

    return 0;
}
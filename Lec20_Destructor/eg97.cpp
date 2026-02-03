#include <iostream>
using namespace std;

class aaa
{
public:
    aaa()
    {
        cout << "Base Class Constructor" << endl;
    }

    ~aaa()
    {
        cout << "Base Class Destructor" << endl;
    }
};

class bbb : public aaa
{
public:
    bbb()
    {
        cout << "Derived Class constructor" << endl;
    }
    ~bbb()
    {
        cout << "Derived Class Destructor" << endl;
    }
};

int main()
{
    bbb b;
    cout << "Cool" << endl;
    return 0;
}

#include <iostream>
using namespace std;

class aaa
{
public:
    aaa()
    {
        cout << "Base Class Constructor" << endl;
    }

    virtual ~aaa()
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
    aaa *b;
    b = new bbb;

    cout << "Cool" << endl;
    delete b;
    return 0;
}

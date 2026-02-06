#include <iostream>

using namespace std;

class aaa
{
public:
    aaa()
    {
        cout << "Base Class Default Constructor" << endl;
    }
};

class bbb : public aaa
{
public:
    bbb()
    {
        cout << "Derived Class Default Constructor" << endl;
    }
    bbb(const bbb &j)
    {
        cout << "Derived Class Copy Construtor" << endl;
    }
};
int main()
{
    bbb k;
    bbb m(k);
    return 0;
}
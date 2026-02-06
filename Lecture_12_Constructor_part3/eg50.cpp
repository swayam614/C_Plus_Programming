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
    bbb(int e)
    {
        cout << "Derived Class Paratermized Construcotr" << endl;
    }
};

int main()
{
    bbb g;
    bbb k(90);

    return 0;
}
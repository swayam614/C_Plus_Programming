#include <iostream>

using namespace std;
class aaa
{
public:
    aaa(int e)
    {
        cout << "Base Class Parameterized Constructor" << endl;
    }
};

class bbb : public aaa
{
public:
    bbb() : aaa(10)
    {
        cout << "Derived Class Default Constructor" << endl;
    }
};
int main()
{
    bbb g;
    return 0;
}
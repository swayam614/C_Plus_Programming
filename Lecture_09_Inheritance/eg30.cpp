#include <iostream>

using namespace std;

class aaa
{
public:
    void sam()
    {
        cout << "Sam" << endl;
    }
};

class bbb : public aaa
{
public:
    void tom()
    {
        cout << "Tom" << endl;
    }
};

class ccc : public aaa
{
public:
    void joy()
    {
        cout << "joy" << endl;
    }
};

class ddd : public bbb, public ccc
{
public:
    void wishing()
    {
        cout << "Good Evening" << endl;
    }
};

int main()
{
    ddd d;
    d.bbb::sam();
    return 0;
}
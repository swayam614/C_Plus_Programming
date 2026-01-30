#include<iostream>

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

int main()
{
    aaa *p;
    p = new bbb;
    p->sam();
    p->tom();
    return 0;
}
#include<iostream>

using namespace std;

class aaa
{
    public:
        void sam()
        {
            cout << "Sam" << endl;
        }
        void tom()
        {
            cout << "Tom from aaa" << endl;
        }
};

class bbb : public aaa
{
    public:
        void tom()
        {
            cout << "Tom from bbbg" << endl;
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
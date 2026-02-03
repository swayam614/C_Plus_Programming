#include <iostream>

using namespace std;

class aaa
{
public:
    aaa()
    {
        cout << "Constructor" << endl;
    }

    ~aaa()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    aaa *a;
    a = new aaa[5];
    cout << "Cool" << endl;
    delete []a;
    return 0;
}
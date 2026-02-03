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
    aaa k;
    cout << "Cool" << endl;
    aaa *a;
    cout << "Ujjain" << endl;
    a = new aaa;
    cout << "Good" << endl;
    delete a;
    cout << "Indore" << endl;
    return 0;
}
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

void lmn()
{
    aaa g, m, t;
}

int main()
{
    aaa a, b;
    cout << "Whatvere" << endl;
    lmn();
    cout << "good" << endl;
    return 0;
}
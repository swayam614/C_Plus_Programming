#include <iostream>
using namespace std;

class aaa
{
public:
    void sam()
    {
        cout << "Sam" << endl;
    }
    static void tom()
    {
        cout << "Tom" << endl;
    }
    static void tiger()
    {
        cout << "Whatever" << endl;
        tom();
    }
};
int main()
{
    return 0;
}
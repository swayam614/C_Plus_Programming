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
};
int main()
{
    aaa a;
    a.sam();
    a.tom();
    return 0;
}
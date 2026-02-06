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
        aaa a;
        cout << "Tom" << endl;
        a.sam();
    }
};
int main()
{
    return 0;
}
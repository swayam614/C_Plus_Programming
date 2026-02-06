#include <iostream>
using namespace std;

class aaa
{
public:
    void sam()
    {
        cout << "Sam" << endl;
        tom();
    }
    static void tom()
    {
        cout << "Tom" << endl;
    }
};
int main()
{
    return 0;
}
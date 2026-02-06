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
    aaa::sam(); // this method is not static so we cannot run this without making object
    // soliution of this problem is present in eg58.cpp

    aaa::tom();
    return 0;
}
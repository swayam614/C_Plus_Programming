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
        sam();
    }
};
int main()
{
    return 0;
}
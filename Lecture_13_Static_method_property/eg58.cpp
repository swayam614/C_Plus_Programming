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
    // aaa::sam(); //static method ko hum bina object ke bhi run kar sak te he
    aaa::tom();
    return 0;
}
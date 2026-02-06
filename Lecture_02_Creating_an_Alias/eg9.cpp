#include <iostream>
using namespace std;
int main()
{
    int x;
    int &p = x; // = karke assign karna jarui hee warna error through kare gaa
    p = 100;
    cout << x << endl;
    x = 900;
    cout << p << endl;

    return 0;
}
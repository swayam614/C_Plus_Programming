#include <iostream>
using namespace std;

int main()
{
    int x;
    int *p;
    p = &x;
    *p = 10;
    cout << x << endl;
    x = 90;
    cout << x << endl;
    return 0;
}
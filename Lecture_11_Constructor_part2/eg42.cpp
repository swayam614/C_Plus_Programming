#include <iostream>
using namespace std;

void add(int p, int q = 0, int r)
{
    cout << "Total is : " << p + q + r << endl;
}

int main()
{
    add(2, 3, 4);
    add(5, 6);
    return 0;
}
#include <iostream>

using namespace std;
void add(int p, int q)
{
    cout << "Total : " << p + q << endl;
}

void add(int p, int q, int r)
{
    cout << "Total : " << p + q + r << endl;
}
int main()
{
    add(9, 9);
    add(9, 8, 7);
    return 0;
}
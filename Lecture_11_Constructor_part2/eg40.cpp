#include <iostream>
using namespace std;

void add(int p, int q, int r)
{
    cout << "Total is : " << p + q + r << endl;
}
void add(int p, int q)
{
    cout << "Total is : " << p + q << endl;
}
int main()
{
    add(2, 3, 4);
    add(5, 6);
    return 0;
}
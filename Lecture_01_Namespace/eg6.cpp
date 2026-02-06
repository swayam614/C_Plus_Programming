#include <iostream>

using namespace std;
int main()
{
    cout << "Enter a number : ";
    int x;
    cin >> x;
    cout << "Enter another number :";
    int y;
    cin >> y;
    int z;
    z = x + y;
    cout << "Value of x is " << x << "\n";
    cout << "Value of y is " << y << "\n";
    // one of the solution for which problem is defined in previos file
    cout << "Total is " << z;
    return 0;
}
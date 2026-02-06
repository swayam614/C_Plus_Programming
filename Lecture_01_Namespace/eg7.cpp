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
    cout << "Value of x is " << x << endl;
    cout << "Value of y is " << y << endl;
    // one of the solution for which problem is defined in eg5.cpp file
    cout << "Total is " << z << endl;
    return 0;
}
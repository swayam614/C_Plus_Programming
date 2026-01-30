#include<iostream>
#include<cstdint>

using namespace std;

int main()
{
    int x;
    cout << &x << endl;
    cout << (uintptr_t) &x << endl;
    return 0;
}
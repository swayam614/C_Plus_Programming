#include<iostream>
#include<cstdint>

using namespace std;

int main()
{
    int x;
    int *p;
    cout << (uintptr_t) &x << endl;
    p = &x;
    cout << (uintptr_t) p << endl;

    p++;
    cout << (uintptr_t) p << endl;
    p += 10;
    cout << (uintptr_t) p << endl;   
    return 0;
}
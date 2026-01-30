#include<iostream>

using namespace std;

class aaa
{
};

class bbb 
{
};


int main()
{
    aaa *a;
    a = new bbb;
    bbb *b;
    b = new aaa;
    return 0;
}
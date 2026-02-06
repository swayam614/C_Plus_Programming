// problem 
// in this code aaa has paratermized constructor and compiler do this 
// bbb:aaa() but in aaa we have not empty / default constructor so for this 
// solution in next file eg53.cpp


#include <iostream>

using namespace std;
class aaa
{
public:
    aaa(int e)
    {
        cout << "Base Class Parameterized Constructor" << endl;
    }
};

class bbb : public aaa
{
};
int main()
{
    bbb b;
    return 0;
}
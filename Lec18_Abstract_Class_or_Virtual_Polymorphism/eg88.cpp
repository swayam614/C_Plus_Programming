/*

*/

#include <iostream>
using namespace std;

// the following class is being created by Sushil

class Car
{
public:
    virtual void manual() = 0; // pure virtual function
};

class Maruti800 : public Car
{
public:
    void manual()
    {
        cout << "Some information about maruti 800" << endl;
    }
};

int main()
{
    Maruti800 m; // Maruti800 is not an abstract class because 
                 // the implementation part of manual has been 
                 // provided in Maruti800  

    return 0;
}

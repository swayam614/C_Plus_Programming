/*
If a class is inheriting as abstract class , then within the derived class 
you will have to provide implementation part of the inherited pure virtual 
functions or the derived class will be treated as ab abstract class.
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
};

int main()
{
    Maruti800 m; // cannot create an instance of abstract class

    return 0;
}

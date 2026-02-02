/*
If a class contians a pure virtual function , then the class is treated as an
abstract class. It may contian other function with defination but still it will
be treated as an abstract class because of the pure virtual function.

You can create pointer from an abstract class
*/

#include <iostream>
using namespace std;

// the following class is being created by Sushil

class Car
{
public:
    virtual void manual() = 0; // pure virtual function 
};

int main()
{
    Car c; // wrong , Car is an abstract class , instance cannot be created 
    Car *p; // pointer can be created from an abstract class
    new Car; // cannot create instance of an abstract class
    return 0;
}

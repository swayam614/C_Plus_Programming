#include <iostream>
using namespace std;

// following 2 classes have been designed by Suresh

class Car
{
public:
    virtual void manual() = 0;
};

class ServiceStation
{
public:
    void doService(Car *c)
    {
        c->manual();
    }
};

// the following class is being designed by Mahesh

class HondaCity: public Car
{
    public:
};

int main()
{
    ServiceStation ss;
    HondaCity h;
    ss.doService(&h); 
    // abb yaha per HondaCity ne inherit kiye per usne manual ko implement nahi kiya ya override nahi kiya
    // toh woh khud bhi ek abstract class keh di jaye gii
    // toh uski jak maar ke manual likh na pade gaa


    return 0;
}
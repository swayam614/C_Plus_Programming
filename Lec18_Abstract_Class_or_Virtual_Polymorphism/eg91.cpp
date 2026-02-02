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

class HondaCity : public Car
{
public:
    void manual()
    {
        cout << "Some information about Honda City" << endl;
    }
};

int main()
{
    ServiceStation ss;
    HondaCity h;
    ss.doService(&h);

    // toh final story
    // abb service station wala nee abstract ka pointer fit kar diya orr koi unknow 
    // aya bhi ki kar do serivce but not car then nahi kare gaa simple
    // toh yaha usse jak maare ke phele toh inherit karna hoga orr phir method override karna pade 
    // gaa wara serivce nahi hogi 

    // receiving end per abstract class ka pointer betha doo toh shamne wala jak mare ke 
    // abstract class ki speicific guidline ko follow kare gaa woh

    return 0;
}
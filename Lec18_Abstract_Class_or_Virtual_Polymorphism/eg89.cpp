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

class HondaCity
{
    public:
};

int main()
{
    ServiceStation ss;
    HondaCity h;
    ss.doService(&h); // yaha problem hee ki argument type car ka pointer hee per hum toh honda city
                      // ka daal re he toh ye galat hee kuki honda city is not a car 
                      // bhalte me bhalta ka pointer nahi daal sak te hee
                      // toh ab honda city ko inherit karna pade ga car ko
                      // kuki service station sirf car ki service karta hee
                      // yaha honda city orr car ka koi relation nahi tha

    return 0;
}
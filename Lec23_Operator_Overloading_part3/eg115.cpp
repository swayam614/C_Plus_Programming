#include <iostream>

using namespace std;

class Fridge;
class TV
{
private:
    int price;

public:
    void setPrice(int price)
    {
        this->price = price;
    }
    int getPrice()
    {
        return this->price;
    }
    friend int operator<(Fridge &f, TV &t);
};

class Fridge
{
private:
    int price;

public:
    void setPrice(int price)
    {
        this->price = price;
    }
    int getPrice()
    {
        return this->price;
    }
    friend int operator<(Fridge &f, TV &t);
};

// independent function
int operator<(Fridge &f, TV &t)
{
    return t.price < f.price;
}

int main()
{

    Fridge f;
    TV t;

    f.setPrice(10000);
    t.setPrice(10000);

    if (f < t)
        cout << "Fridge is less costly than TV";
    else
        cout << "Fridge is not less costly than TV";
    return 0;
}
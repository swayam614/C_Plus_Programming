#include <iostream>

using namespace std;

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
    friend class Calculator;
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
    friend class Calculator;
};

class Calculator
{
public:
    int getTotalCost(TV &t, Fridge &f)
    {
        return t.price + f.price;
    }
    int getDiff(TV &t, Fridge &f)
    {
        return t.price - f.price;
    }
};

int main()
{
    TV t;
    Fridge f;
    Calculator c;
    t.setPrice(100000);
    f.setPrice(50000);

    cout << c.getTotalCost(t, f) << endl;
    cout << c.getDiff(t, f) << endl;
    return 0;
}
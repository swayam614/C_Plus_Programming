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
    friend int getTotalCost(TV &t, Fridge &f);
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
    friend int getTotalCost(TV &t, Fridge &f);
};

int getTotalCost(TV &t, Fridge &f)
{
    return t.price + f.price;
}

int main()
{
    TV t;
    Fridge f;
    t.setPrice(50000);
    f.setPrice(90000);
    int total = getTotalCost(t, f);
    cout << "Total cost is : " << total << endl;
    return 0;
}

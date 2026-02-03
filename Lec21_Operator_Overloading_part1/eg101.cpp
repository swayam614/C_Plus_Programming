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
};

int getTotalCost(TV *t, Fridge *f)
{
    return t->getPrice() + f->getPrice();
}
// yaha humko main walae ko ek feature dena tha ki woh 
// total compute kar sake

int main()
{
    TV t;
    Fridge f;
    t.setPrice(50000);
    f.setPrice(90000);
    int total = getTotalCost(&t, &f);
    cout << "Total cost is : " << total << endl;
    return 0;
}

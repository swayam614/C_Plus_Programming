#include <iostream>
#include <string.h>

using namespace std;

class SDCard
{
private:
    int capacity;

public:
    void setCapacity(int c)
    {
        capacity = c;
    }

    int getCapacity()
    {
        return capacity;
    }
};

class MobilePhone
{
private:
    char brandName[36];
    SDCard sdCard;
    int price;

public:
    void setBrandName(const char *b)
    {
        stpcpy(brandName, b);
    }
    void getBrandName(char *add)
    {
        strcpy(add, brandName);
    }

    void setPrice(int p)
    {
        price = p;
    }
    int getPrice()
    {
        return price;
    }

    void setSdCard(SDCard s)
    {
        sdCard = s;
    }
    SDCard getSdCard()
    {
        return sdCard;
    }
};

int main()
{
    MobilePhone m;
    SDCard s;

    char brand[36];
    int price;
    SDCard mobilePhone;
    m.setBrandName("Apple");
    m.setPrice(100000);
    s.setCapacity(12);
    m.setSdCard(s);

    m.getBrandName(brand);
    price = m.getPrice();
    mobilePhone = m.getSdCard();

    cout << "Mobile details" << endl;
    cout << "Brand : " << brand << endl;
    cout << "Price : " << price << endl;
    cout << "Capacity of SdCard in  Mobile : " << mobilePhone.getCapacity() << endl;

    return 0;
}

FILE *f;
struct _io_FILE *f;
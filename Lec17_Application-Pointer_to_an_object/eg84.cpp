#include <iostream>

using namespace std;

class Car
{
public:
    void manual()
    {
    }
};

class Maruti800 : public Car
{
    // 1000 properties
public:
    void manual()
    {
        cout << "Operations details of Maruti 800" << endl;
    }
};

class HondaCity : public Car
{
    // 1000 properties
public:
    void manual()
    {
        cout << "Operations details of Honda City" << endl;
    }
};

int main()
{
    int ch;
    Car *c;
    cout << "1 Maruti 800" << endl;
    cout << "2 Honda City" << endl;
    cout << "Enter your choice ";
    cin >> ch;
    if (ch >= 1 && ch <= 2)
    {
        if (ch == 1)
        {
            c = new Maruti800;
        }
        else if (ch == 2)
        {
            c = new HondaCity;
        }
        c->manual();
    }
    else
        cout << "Invalid choice" << endl;
    return 0;
}

// toh yaha humne car ko manual dedeiya hee per usee Maruti 800 or honda city ka thodi na chalna hee 

// next program we solve this 

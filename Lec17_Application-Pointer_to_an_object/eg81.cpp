#include<iostream>

using namespace std;

class Maruti800
{
    // 1000 properties
    public:
        void manual()
        {
            cout << "Operations details of Maruti 800" << endl;
        }
};

class HondaCity
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
    Maruti800 m; // size according to properties of Maruti 800
    HondaCity h; // size according to properties of Honda City
    cout << "1 Maruti 800" << endl;
    cout << "2 Honda City" << endl;
    cout << "Enter your choice " ;
    cin >> ch;
    if(ch == 1) m.manual();
    else if(ch == 2) h.manual();
    else cout << "Invalid choice" << endl;
    return 0;
}
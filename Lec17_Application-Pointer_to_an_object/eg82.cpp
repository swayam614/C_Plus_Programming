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
    Maruti800 *m; 
    HondaCity *h; 
    cout << "1 Maruti 800" << endl;
    cout << "2 Honda City" << endl;
    cout << "Enter your choice " ;
    cin >> ch;
    if(ch == 1) 
    {
        m = new Maruti800;
        m->manual();
    }
    else if(ch == 2) 
    {
        h = new HondaCity;
        h->manual();
    }
    else cout << "Invalid choice" << endl;
    return 0;
}
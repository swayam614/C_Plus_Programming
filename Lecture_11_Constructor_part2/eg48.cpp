#include <iostream>
using namespace std;

class IntCollection
{
private:
    int size;
    int *x;

public:
    IntCollection(int req)
    {
        if (req > 0)
        {
            x = new int[req];
            size = req;
        }
        else
        {
            x = NULL;
            size = 0;
        }
    }
    IntCollection(const IntCollection &v)
    {
        if (v.size == 0)
        {
            x = NULL;
            size = 0;
        }
        else
        {
            x = new int[v.size];
            size = v.size;
            for (int i = 0; i < size; i++)
            {
                x[i] = v.x[i];
            }
        }
    }

    void askInput()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter a number : ";
            cin >> x[i];
        }
    }

    void printCollection()
    {
        for (int i = 0; i < size; i++)
        {
            cout << x[i] << endl;
        }
    }
};

int main()
{
    IntCollection c1(5);
    c1.askInput();
    cout << "Printing Collection c1" << endl;
    c1.printCollection();
    IntCollection c2(c1);

    cout << "Printing Collection c2" << endl;
    c2.printCollection();
    c2.askInput();
    cout << "Printing Collection c2" << endl;
    c2.printCollection();
    cout << "Printing Collection c1" << endl;
    c1.printCollection();

    return 0;
}
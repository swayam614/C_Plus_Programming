#include <iostream>

using namespace std;

class Rectangle
{
    // by default access specifier is private
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        length = l;
    }
    int getLength()
    {
        return length;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getBreadth()
    {
        return breadth;
    }
};

class Box : private Rectangle
{
    int height;

public:
    void setHeight(int h)
    {
        height = h;
    }
    int getHeight()
    {
        return height;
    }
};

int main()
{
    Box b;
    // b.length = 90;
    // b.height = 99;
    // b.breadth = 9000;
    // inn tino property ko box ki private consider kare ge hum
    b.setLength(10);
    b.setHeight(20);
    b.setBreadth(30);
    cout << "Length : " << b.getLength() << endl;
    cout << "Breadth : " << b.getBreadth() << endl;
    cout << "Height : " << b.getHeight() << endl;
    return 0;
}
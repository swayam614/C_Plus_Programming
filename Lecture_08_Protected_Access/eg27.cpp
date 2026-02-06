#include <iostream>

class aaa
{
private:
    int x;

protected:
    int y;
};

class bbb : protected aaa
{
public:
    // some members
};

class ccc : public bbb
{
public:
    void sam()
    {
        y = 100;
    }
};

class ddd : public ccc
{
public:
    void joy()
    {
        y = 1000;
    }
};

class eee : public ddd
{
public:
    void hello()
    {
        y = 9000;
    }
};

class fff : private eee
{
public:
    void hii()
    {
        y = 4000;
    }
};

class ggg : public fff
{
public:
    void tom()
    {
        y = 98;
    }
};
int main()
{
    return 0;
}
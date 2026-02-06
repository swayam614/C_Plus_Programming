#include <iostream>
#include <string.h>

using namespace std;
class Book
{
private:
    char title[36];

public:
    void setTitle(char *t)
    {
        if (strlen(t) > 35)
            t[0] = '\0';
        else
            strcpy(title, t);
    }
    char *getTitle()
    {
        return title;
    }
};
int main()
{
    Book b;
    char *l;
    l = b.getTitle();
    strcpy(l, "abcdefghijklmnopqrstuvwxyzSwayam How Are you I am fine");
    cout << l << endl;  
    // in file there is problem like getter will expose the address of array so user can do anything
    // solution is the next file

    return 0;
}
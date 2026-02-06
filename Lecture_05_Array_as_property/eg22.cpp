#include <iostream>
#include <string.h>

using namespace std;
class Book
{
private:
    char title[36];

public:
    void setTitle(const char *t)
    {
        if (strlen(t) > 35)
            title[0] = '\0';
        else
            strcpy(title, t);
    }
    void getTitle(char *add)
    {
        strcpy(add, title);
    }
};
int main()
{
    Book b;
    char l[36];
    b.setTitle("Swayam");
    b.getTitle(l);
    cout << l << endl;

    return 0;
}
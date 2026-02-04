#include <stdio.h>

struct abc
{
    int x, y;
    char m;
};

int main()
{
    struct abc g, t;
    g.x = 10;
    g.y = 20;
    g.m = 'A';
    t = g;
    printf("%d %d %c\n", t.x, t.y, t.m);
    return 0;
}
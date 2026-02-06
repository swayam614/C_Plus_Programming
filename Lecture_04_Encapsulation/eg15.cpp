#include <iostream>

struct Rectangle
{
    int length;
    int breadth;
    int area;
};

void createRectangle()
{
    struct Rectangle g; // g is structure of type struct Rectangle
    printf("Enter the lenght : ");
    scanf("%d", &g.length);
    printf("Enter the breadth : ");
    scanf("%d", &g.breadth);

    g.area = g.length * g.breadth;
    printf("Area : %d\n", g.area);
}
// the above code is wrriten by amit

// the following code is written by someone else
int main()
{
    struct Rectangle t; // t is structure os type Rectangle
    printf("Enter the lenght : ");
    scanf("%d", &t.length);
    printf("Enter the breadth : ");
    scanf("%d", &t.breadth);
    t.area = 2 * (t.length + t.breadth);
    printf("Area : %d\n", t.area);
    return 0;
}
#include <stdio.h>

void lmn(int p, int q)
{
    printf("Total is : %d\n", p + q);
}

int pqr(int x)
{
    return x * x;
}
int main()
{
    int (*k)(int);
    void (*p)(int, int);
    k = pqr;
    p = lmn;
    printf("%d\n", k(10));
    p(10, 20);
    return 0;
}
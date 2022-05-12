#include <stdio.h>
void show(int m);
int main(void)
{
    int n = 3;
    show(n);
    return 0;
}
void show(int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("-1 1 ");
    }
}
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
    int digit = -5;
    for (int i = 0; i < m; i++)
    {
        printf("%d ", digit);
        digit = digit * -1;
    }
}
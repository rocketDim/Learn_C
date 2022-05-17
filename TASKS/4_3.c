#include <stdio.h>
int max(int a, int b);
int main(void)
{
    int a = 10;
    int b = 25;
    int result;
    result = max(a, b);
    printf("%d", result);
    return 0;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
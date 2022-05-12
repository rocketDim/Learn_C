#include <stdio.h>
int show(int m);
int main(void)
{
    int n = 3;
    int digit = -5;
    int current;
    for (int i = 0; i < m; i++)
    {
        current = show(i, digit);
        printf("%d ", current);
    }
    return 0;
}
int show(int count, int startDigit)
{
    int result = startDigit;
    for (int i = 0; i < m; i++)
    {
        result *= -1;
    }
    return result;
}
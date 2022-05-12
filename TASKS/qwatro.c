#include <stdio.h>
int main(void)
{
    int square = 0;
    int n = 3;
    int i;
    for (i = 1; i <= n; i++)
    {
        square += i * i; //square = square + i * i
    }
    printf("%d\n", square);
    return 0;
}
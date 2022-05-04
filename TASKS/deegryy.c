#include <stdio.h>
int main(void)
{
    int result = 1;
    int power = 5;
    int base = 2;
    int i;
    for(i = 1; i <= power; i++)
    {
        result = result * base;
    }
    printf("%d\n", result);
    return 0;
}
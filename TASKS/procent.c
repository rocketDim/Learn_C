#include <stdio.h>
int main(void)
{
    int n = 1024;
    while (n > 0)
    {
        printf("%d ", n);
        n = n / 10;
    }

    return 0;
}
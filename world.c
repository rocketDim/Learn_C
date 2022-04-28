#include <stdio.h>

int main(void)
{
    int n = 0;
    while (n < 8)
    {
        printf("x");
        n++;
    }
    printf("\n");

    int a = 1;
    while (a < 4)
    {
        printf("x      x\n");
        a++;
    }
    int t = 0;
    while (t < 8)
    {
        printf("x");
        t++;
    }
    printf("\n");
    return 0;
}

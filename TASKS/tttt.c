#include <stdio.h>
int main(void)
{
    int num = 123;
    int sum = 0;
    while (num > 0)
    {
        num = num / 10;
        sum++;
    }
    printf("%d\n", sum);

    return 0;
}
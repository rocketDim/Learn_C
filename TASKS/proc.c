#include <stdio.h>
int main(void)
{
    int num = 1024;
    int digit;
    int sum = 0;
    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + digit;
    }
    printf("%d ", sum);

    return 0;
}
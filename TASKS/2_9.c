// Реверс числа
#include <stdio.h>

int main(void)
{
    int num = 1024;
    int result = 0;
    int current_digit;
   while (num > 0)
    {
        current_digit = num % 10;
        num = num / 10;
        result = result * 10;
        result = result + current_digit;
    }
    printf("%d\n", result);
    return 0;
}

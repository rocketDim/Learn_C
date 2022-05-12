// Реверс числа
#include <stdio.h>
int reverse(int num);
int main(void)
{
    int num = 1024;
    int reversed;
    reversed = reverse(num);
    printf("%d", reversed);
    return 0;
}
int reverse(int num)
{
    int result = 0;
    int current_digit;
    while (num > 0)
    {
        current_digit = num % 10;
        num = num / 10;
        result = result * 10;
        result = result + current_digit;
    }
    

    return result;
}
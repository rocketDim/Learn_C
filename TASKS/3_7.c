#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Введите три числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        if (a * a == b * b + c * c)
        {
            printf("Правильно!");
        }
        else
        {
            printf("Неверно!");
        }
    }
    else
    {
        if (b > c)
        {
            if (b * b == c * c + a * a)
            {
                printf("Правильно!");
            }
            else
            {
                printf("Неверно!");
            }
        }
        else
        {
            if (c * c == a * a + b * b)
            {
                printf("Правильно!");
            }
            else
            {
                printf("Неверно!");
            }
        }
    }
    return 0;
}
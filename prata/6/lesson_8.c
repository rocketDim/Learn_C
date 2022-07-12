#include <stdio.h>
int main(void)
{
    float a, b, c;
    printf("Введите числа через пробел: ");
    while (scanf("%f %f", &a, &b) == 2)
    {
        if (a > b)
        {
            c = a - b;
        }
        else
        {
            c = b - a;
        }

        printf("%f\n", c / (a * b));
        printf("Введите числа через пробел: ");
    }
    printf("Неверный символ!\n");
    return 0;
}
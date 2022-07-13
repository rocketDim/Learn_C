#include <stdio.h>
void difference(float x, float y, float z);

int main(void)
{
    float a, b, c, d;
    printf("Введите числа через пробел: ");
    difference(a, b, c);
    printf("Неверный символ!\n");
    return 0;
}

void difference(float x, float y, float z)
{
    while (scanf("%f %f", &x, &y) == 2)
    {
        if (x > y)
        {
            z = x - y;
        }
        else
        {
            z = y - x;
        }
        printf("%f\n", z / (x*y));
        printf("Введите числа через пробел: ");
    }
}
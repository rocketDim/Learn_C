//Прграмма преобразует температуру
#include <stdio.h>
void temperatures(double far);
int main(void)
{
    double meaning;
    printf("Введите температуру по Фаренгейту: ");
    while (scanf("%lf", &meaning) == 1)
    {
        temperatures(meaning);
        printf("Введите температуру по Фаренгейту: ");
    }
    printf("Ошибка! Программа завершена!\n");
    return 0;
}
void temperatures(double far)
{
    double cels, kelv;
    double const NUM_1 = 32.0;
    double const NUM_2 = 5.0 / 9.0;
    double const NUM_3 = 273.16;
    cels = NUM_2 * (far - NUM_1);
    kelv = cels + NUM_3;
    printf("Температура по Фаренгейту: %.2lf\n", far);
    printf("Температура по Цельсию: %.2lf\n", cels);
    printf("Температура по Кельвину: %.2lf\n", kelv);
}
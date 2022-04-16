#include <stdio.h>

int temperatures(double far)
{
    double cel, kel;
    double const TEM_1 = 32.0;
    double const TEM_2 = 5.0 / 9.0;
    double const TEM_3 = 273.16;

    cel = TEM_2 * (far - TEM_1);
    kel = cel + TEM_3;

    printf("Фаренгейт F: %8.2lf\nЦельсий C: %10.2lf\nКельвин K: %10.2lf\n", far, cel, kel);

    return 0;
}
int main(void)
{
    double temp_far;
    printf("Ведите температуру по Фаренгейту: ");
    scanf("%lf", &temp_far);

    while (double temp_far)
    {
        temperatures(temp_far);
        printf("Ведите температуру по Фаренгейту: ");
        scanf("%lf", &temp_far);
    }
    printf("Готово!\n");

    return 0;
}

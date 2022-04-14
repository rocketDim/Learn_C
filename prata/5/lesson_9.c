#include <stdio.h>

int temperatures(double far)
{
    double cel, kel;
    double const TEM_1 = 32.0;
    double const TEM_2 = 5.0;
    double const TEM_3 = 9.0;
    double const TEM_4 = 273.16;

    cel = TEM_2 / TEM_3 * (far - TEM_1);
    kel = cel + TEM_4;

    printf("Фаренгейт F: %8.2lf\nЦельсий C: %10.2lf\nКельвин K: %10.2lf\n", far, cel, kel);

    return 0;
}
int main(void)
{
    double temp_far;
    printf("Ведите температуру по Фаренгейту: ");
    scanf("%lf", &temp_far);

    while (temp_far)
    {
        temperatures(temp_far);
        printf("Ведите температуру по Фаренгейту: ");
        scanf("%lf", &temp_far);
    }
    printf("Готово!\n");

    return 0;
}

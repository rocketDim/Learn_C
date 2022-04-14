#include <stdio.h>

int temperatures(double far)
{
    double const cel = 5.0 / 9.0 * (far - 32.0); // не понятно про 3 конст., если одну вводит пользователь?
    double const kel = cel + 273.16;
    printf("Фаренгейт F: %.2lf\nЦельсий C: %.2lf\nКельвин K: %.2lf\n", far, cel, kel);

    return 0;
}
int main(void)
{
    double far, cel, kel;
    while(far   )
    {
    printf("Ведите температуру по Фаренгейту: ");
    scanf("%lf", &far);

    temperatures(far);
    }

    return 0;
}

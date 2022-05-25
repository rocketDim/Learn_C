// Программа преобразует минуты в часы и минуты
#include <stdio.h>
#define MIN_IN_HOURS 60

int main(void)
{
    int minutes, result, hours;
    printf("Введите время в минутах: ");
    scanf("%d", &minutes);
    while (minutes > 0)
    {
        hours = minutes / MIN_IN_HOURS;
        result = minutes % MIN_IN_HOURS;
        printf("%d часов %d минут\n", hours, result);
        printf("Введите время в минутах: ");
        scanf("%d", &minutes);
    }

    return 0;
}
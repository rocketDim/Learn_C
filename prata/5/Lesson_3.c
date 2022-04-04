#include <stdio.h>

int main(void)

{
    int week, day, other;
    const int DAY_IN_WEEK = 7;

    printf("Введите количество дней: ");
    scanf("%d", &day);

    while (day > 0)
    {
        week = day / DAY_IN_WEEK;
        other = day % DAY_IN_WEEK;
        
        printf ("%d дней состовляют %d недель(я) и %d дней(я)\n", day, week, other);

        printf("Введите следующее значение:\n");
        scanf("%d", &day);
    }

    printf("Готово!\n");

    return 0;
}
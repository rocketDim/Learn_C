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
        
        printf("%d %s %s %d %s и %d %s\n", 
                day, day == 1 ? "день" : 2 <= day && day <= 4 ? "дня" : "дней",
                day == 1 ? "составляет" : "составляют",
                week, week == 1 ? "неделя" : 2 <= week && week <= 4 ? "недели" : "недель",
                other, other == 1 ? "день" : 2 <= other && other <= 4 ? "дня" : "дней");

        printf("Введите следующее значение:\n");
        scanf("%d", &day);
    }

    printf("Готово!\n");

    return 0;
}
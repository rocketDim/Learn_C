//Задача на массивы
#include <stdio.h>
int main(void)
{
    const int MONTHS = 12;
    int week[MONTHS] = {6, 5, 5, 5, 6, 5, 5, 5, 5, 6, 5, 5};
    for (int i = 0; i < MONTHS; i++)
    {
        printf("Месяц %d имеет %d недель.\n", i + 1, week[i]);
    }
    return 0;
}
// Программа преобразует дни в недели и дни
#include <stdio.h>
const int DAY_IN_WEEK = 7;
int main(void)
{
    int days, week, num;
    printf("Введите кол-во дней: ");
    scanf("%d", &days);
    while (num > 0)
    {
        week = days % DAY_IN_WEEK;
        num = days / DAY_IN_WEEK;
        printf("%d дней состовляют %d недели и %d дня.\n", days, week, num);
        if (num != 0)
        {
            printf("Введите следующее кол-во дней: ");
            scanf("%d", &days);
        }
        else
        {
           printf("Конец!\n"); 
        }
    }

    return 0;
}
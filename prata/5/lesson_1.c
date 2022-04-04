#include <stdio.h>
#define MIN_IN_HOUR 60

int main(void)

{
    int min, hour, left;

    printf("Введите количество минут: ");
    scanf("%d", &min);

    while (min > 0)
    {
        hour = min / MIN_IN_HOUR;
        left = min % MIN_IN_HOUR;
        
        printf ("%d минут - это %d часов и %d минут\n", min, hour, left);

        printf("Введите следующее значение:\n");
        scanf("%d", &min);
    }

    printf("Готово!\n");

    return 0;
}
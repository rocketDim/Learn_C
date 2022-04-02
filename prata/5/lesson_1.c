#include <stdio.h>
#define MIN_IN_CLOCK 60

int main(void)

{
    int sec, min, left;

    printf("Введите количество секунд:\n");
    scanf("%d", &sec);

    while (sec > 0)
    {
        min = sec / MIN_IN_SEC;
        left = sec % MIN_IN_SEC;

        printf("Введите следующее значение:\n");
        scanf("%d", &sec);
    }

    printf("Готово!\n");

    return 0;
}
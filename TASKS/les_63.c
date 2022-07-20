//НОД
#include <stdio.h>
int main(void)
{
    int x, y, NOD;
    printf("Введите два числа: ");
    scanf("%d %d", &x, &y);
    for (int i = 0; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)//проверка, делятся ли оба числа на i без остатка
            NOD = i;
    }
    printf("НОД - %d\n", NOD);

    return 0;
}
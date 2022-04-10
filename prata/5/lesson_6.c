#include <stdio.h>

int main(void)
{
    int count, sum, num;
    count = 0;
    sum = 0;
    printf("Введите число: ");
    scanf("%d", &num);

    while (count++ < num)
        sum = sum + count * count;

    printf("sum = %d\n", sum);

    return 0;
}
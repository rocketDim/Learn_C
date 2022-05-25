// Программа выводит числа больше на 10
#include <stdio.h>
int main(void)
{
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    for (int i = num; i <= num + 10; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
#include <stdio.h>
int main(void)
{
    int num_1, num_2, result;
    printf("Введите два числа через пробел: ");
    scanf("%d %d", &num_1, &num_2);
    printf("Введите ответ: ");
    scanf("%d", &result);
    if(num_1 * num_2 == result)
    {
        printf("Правильный ответ!\n");
    }
    else
    {
        printf("Ответ неверный!\n");
        printf("Правильный ответ: %d\n", num_1 * num_2);
    }
    return 0;
}
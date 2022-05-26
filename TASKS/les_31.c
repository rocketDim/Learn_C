// Деление по модулю
#include <stdio.h>

int main(void)
{
    int num_1, num_2, result;
    printf("Введите второй операнд: ");
    scanf("%d", &num_2);
    printf("Введите первый операнд: ");
    scanf("%d", &num_1);
    while (num_1 > 0)
    {
        result = num_1 % num_2;
        printf("%d %% %d равно %d\n", num_1, num_2, result);
        printf("Теперь введите первый операнд (<=0 для выхода): ");
        scanf("%d", &num_1);
    }
    printf("Готово!\n");
    return 0;
}
#include <stdio.h>

int main(void)
{
    float num;

    printf("Введите значение: ");
    scanf("%f", &num);
    printf("Запись с фиксированной запятой: %f\n", num);
    printf("Экспоненциальная форма записи: %e\n", num);
    printf("Двоично - экспоненциальная форма записи: %a\n", num);

    return 0;
}

// Программа
#include <stdio.h>
const float INCH_IN = 30.48;
int main(void)
{
    int height, foot;
    float inch;
    printf("Введите высоту в см: ");
    scanf("%d", &height);
    while (height > 0)
    {
        foot = height / INCH_IN;
        inch = ((height / INCH_IN) - foot) * 12;
        printf("%d см = %d футов, %.1f дюймов\n", height, foot, inch);
        printf("Введите высоту в см (<=0 для выхода из программы)\n");
        scanf("%d", &height);
    }
    printf("Работа завершена.\n");

    return 0;
}

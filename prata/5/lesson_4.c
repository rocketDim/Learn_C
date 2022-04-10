#include <stdio.h>
#define FT_IN_SM  30.48
#define INCH_IN_SM  2.54

// 1 ft == 12 inch

int main(void)

{
    int foot, lv;
    float inch, sm;

    printf("Введите высоту в сантиметрах: ");
    scanf("%f", &sm);

    while (sm > 0)
    {
        foot = sm / FT_IN_SM;
        inch = sm / INCH_IN_SM;

        printf("%.1f см = %d футов, %.1f дюймов\n", sm, foot, inch);

        printf("Введите высоту в сантиметрах (<=0 для выхода из программы): ");
        scanf("%f", &sm);
    }

    printf("Работа завершена.\n");

    return 0;
}
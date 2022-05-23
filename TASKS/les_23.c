//Программа показывает отличие типов с плавающей запятой
#include <stdio.h>
#include <float.h>
int main(void)
{
    double digit = 1.0 / 3.0;
    float num = 1.0 / 3.0;
    printf("Double - %.4f - %.12f - %.16f\n", digit, digit, digit);
    printf("Float -  %.4f - %.12f - %.16f\n", num, num, num);
    printf("Точность Double %d\n", DBL_DIG);
    printf("Точность Float %d\n", FLT_DIG);
    return 0;
}
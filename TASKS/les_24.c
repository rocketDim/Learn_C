// Программа переводит американскую систему заправки топлива в европейскую
#include <stdio.h>
#define GALLON_IN_GAS 3.785
#define MILE_IN_KM 1.609
int main(void)
{
    float mile, gallon;
    printf("Введите кол-во миль и галлонов: ");
    scanf("%f %f", &mile, &gallon);
    printf("Кол-во литров на 100 км: %.2f\n", ((gallon * GALLON_IN_GAS) / (mile * MILE_IN_KM)) * 100);
    return 0;
}
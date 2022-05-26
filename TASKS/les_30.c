// Программа возводит число в куб
#include <stdio.h>
int cube(double a);
int main(void)
{
    double digit, result;
    printf("Введите число для расчета: ");
    scanf("%lf", &digit);
    result = cube(digit);
    printf("Результат: %.2lf\n", result);
    return 0;
}
int cube(double a)
{
    return (a * a * a);
}
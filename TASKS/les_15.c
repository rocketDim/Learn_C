// Программа переволит рост в дюймах в сантиметры
#include <stdio.h>
int main(void)
{
    int growth;
    float const INCH_IN_CENTIMETER = 2.54;
    printf("Введите рост в дюймах\n");
    scanf("%d", &growth);

    printf("%d дюймов = %.2f см\n", growth, growth * INCH_IN_CENTIMETER);
    return 0;
}
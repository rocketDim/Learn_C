// Программа перевода измерения объема жидкости
#include <stdio.h>
int main(void)
{
    float const CUP_IN_PINT = 0.5;
    float const CUP_IN_OZ = 8;
    float const CUP_IN_SPOON = 16;
    float const CUP_IN_SPOON_2 = 48;
    int tea_water;

    printf("Введите кол-во чашек: ");
    scanf("%d", &tea_water);

    printf("%d чашек = %.2f пинты = %.2f унций = %.2f ст.лож. = %.2f ч.лож.\n",
           tea_water, (tea_water * CUP_IN_PINT),
           (tea_water * CUP_IN_OZ), (tea_water * CUP_IN_SPOON),
           (tea_water * CUP_IN_SPOON_2));

    return 0;
}
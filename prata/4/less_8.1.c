#include <stdio.h>
#define kilom 0.6215
#define liter 0.2642

int main(void)

{
    float gallon, mile;
    float lit, km;

    printf("Кол-во миль: ");
    scanf("%f", &mile);
    printf("Кол-во галлонов: ");
    scanf("%f", &gallon);
    printf("Кол-во миль на одном галлоне: %.1f\n", (mile / gallon));
    lit = gallon * liter;
    km = (mile * kilom);
    printf("Кол-во литров на 100 км: %.1f\n", (km / lit));

    return 0;
}
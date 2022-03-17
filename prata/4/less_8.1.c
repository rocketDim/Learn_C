#include <stdio.h>

#define kilom_in_mils 1.609
#define litr_in_gallon 3.785

int main(void)
{
    float gallon, mile;
    float lit, km, mpg, lpr;

    printf("Кол-во миль: ");
    scanf("%f", &mile);
    
    printf("Кол-во галлонов: ");
    scanf("%f", &gallon);

    mpg = mile / gallon;
    
    printf("Кол-во миль на одном галлоне: %.1f\n", mpg);
   
    lit = (gallon * litr_in_gallon);
    km = (mile * kilom_in_mils);
    lpr = ((100 * lit) / (mpg * km));
    printf("Кол-во литров на 100 км: %.2f\n", lpr);

    return 0;
}
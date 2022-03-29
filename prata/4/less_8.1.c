#include <stdio.h>

#define mils_in_km 1.609
#define gallon_in_lit 3.785

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
   
    lit = (gallon * gallon_in_lit);
    km = (mile * mils_in_km);

    printf("Кол-во литров на 100 км: %.2f\n", (lit / km) * 100);

    return 0;
}
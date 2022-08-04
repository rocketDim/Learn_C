//Вычисление частного и остатка от деления
#include <stdio.h>

int main(void)
{
    int divindend, divisor, quotient, remainder;

    while (divisor > 0)
    {

        printf("Введите делимое: ");
        scanf("%d", &divindend);

        printf("Введите делитель: ");
        scanf("%d", &divisor);

        quotient = divindend / divisor;  //вычисление частного
        remainder = divindend % divisor; //вычисление остатка

        printf("Частное = %d\n", quotient);
        printf("Остаток = %d\n", remainder);
    }

    return 0;
}
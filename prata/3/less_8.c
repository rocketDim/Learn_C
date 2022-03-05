#include <stdio.h>

int main(void)
{
    float cup;

    printf("Введите кол-во чашек: ");
    scanf("%f", &cup);
    printf("Пинта: %f , Унция: %f , Стол. ложка: %f , Чайн. ложка: %f\n",
           (cup / 2.0),
           (cup * 8.0),
           (cup * 8.0 * 2.0),
           (cup * 8.0 * 2.0 * 3.0));

    return 0;
}
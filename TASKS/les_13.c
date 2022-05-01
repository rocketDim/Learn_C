// Программа преобразует годы в секунды
#include <stdio.h>
int main(void)
{
    float age;
    double const AGE_IN_SEK = 3.156e+7; 
    printf("Введите свой возраст: ");
    scanf("%f", &age);
    printf("%e\n", age * AGE_IN_SEK);
    return 0;
}
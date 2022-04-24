//Программа преобразует возраст в годах в возраст дней
#include <stdio.h>
#define YEAR_IN_DAYS 365
int main(void)
{
    int age = 40;

    printf("Мой возраст лет %d лет это %d дней\n", age, age * YEAR_IN_DAYS); 
    return 0;
}
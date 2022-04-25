// Программа с функциями про страны
#include <stdio.h>
void br(void); // прототип функции br
void ic(void); // прототип функции ic
int main(void)
{
    br(); // вызов функции
    printf(", "); // функция printf добавляет запятую
    ic(); // вызов функции
    printf("\n"); // функция printf переход на следущую строку
    ic(); // вызов функции
    printf(", ");
    printf("\n");
    br(); // вызов функции
    printf("\n");
    return 0;
}
void br(void) // функция br
{
    printf("Бразилия, Россия");
}

void ic(void) // функция ic
{
    printf("Индия, Китай");
}
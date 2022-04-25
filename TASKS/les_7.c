// Программа показывает работу функции
#include <stdio.h>
void smile(void); // прототип функции
int main(void)
{
    smile(); // вызов функции
    smile();
    smile();
    printf("\n");
    smile(); // вызов функции
    smile();
    printf("\n");
    smile(); // вызов функции
    printf("\n");
    return 0;
}
void smile(void) // функция smille
{
    printf("Улыбайся!");
}
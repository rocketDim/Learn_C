// Программа показывает работу функции
#include <stdio.h>
void smile(void) // функция smille
{
    printf("Улыбайся!");
}
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
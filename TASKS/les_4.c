// Простейшая программа с функциями
#include <stdio.h>
void jolly(void); // прототип функции jolly
void denny(void); // прототип функции denny
int main(void)
{
    jolly(); // вызов функции
    jolly();
    jolly();
    denny();
    return 0;
}

void jolly(void) // функция jolly
{
    printf("Он веселый молодец!\n");
}

void denny(void) // функция denny
{
    printf("Никто не может это отрицать!\n");
}
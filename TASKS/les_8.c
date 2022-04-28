// Программа, где одна функция вызывает другую
#include <stdio.h>
void one_three();

int main(void)
{
    printf("начинаем:\n");
    one_three();
    printf("порядок!\n");
    return 0;
}

void two();
void one_three()
{
    printf("один\n");
    two();
    printf("три\n");
}
void two()
{
    printf("два\n");
}
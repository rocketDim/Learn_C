//Массив преобразования типов 
#include <stdio.h>
int main(void)
{
    char n[6] = {72, 101, 108, 108, 111, 33};
    for (int i = 0; i < 6; i++)
    {
        printf("%c", n[i]);
    }
    printf("\n");

    return 0;
}
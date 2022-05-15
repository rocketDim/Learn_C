// Таблица умножения
#include <stdio.h>
int main(void)
{

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 2; j <= 9; j++)
        {
            printf("%2d ", j * i);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
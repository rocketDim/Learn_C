#include <stdio.h>
int main(void)
{
    int X, Y;
    printf("Введите преиод через пробел: ");
    scanf("%d %d", &X, &Y);

    for (int i = X; i <= Y; i++)
    {
        printf("%d %3d %5d\n", i, i * i, i * i * i);
    }
    return 0;
}
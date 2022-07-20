#include <stdio.h>
int main(void)
{
    int X, Y;
    printf("Введите нижний и верхний целочисленные пределы: ");
    scanf("%d %d", &X, &Y);

    for (int i = X; i <= Y; i++)
    {
        printf("Сумма квадратов целых чисел от %d до %d равна %d\n", X * X, Y * Y, );
    }
    return 0;
}
//Задача положительные/отрицательные
#include <stdio.h>

int num(int a, int b, int c);

int main(void)
{
    int x, y, z, result;
    printf("Введите 3 числа через пробел: ");
    scanf("%d %d %d", &x, &y, &z);
    
    result = num(x, y, z);
    printf("%d\n", result);
    return 0;
}

int num(int a, int b, int c)
{
    if (a > 0)
    {
        return a;
    }
    if (b > 0)
    {
        return b;
    }
    else
    {
        return c;
    }
}

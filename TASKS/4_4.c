#include<stdio.h>
int max3(int a, int b, int c);
int main(void)
{
    int num_1, num_2, num_3, result;
    printf("Введите три числа через пробел: ");
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    result = max3(num_1, num_2, num_3);
    printf("%d\n", result);
    return 0;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int max3(int a, int b, int c)
{
    int result;
    result = max(a, b);
    result = max(result, c);
    return result;
}
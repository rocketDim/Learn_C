#include <stdio.h>
int main(void)
{
    int num_1, num_2;
    printf("Введите два числа через пробел: ");
    scanf("%d %d", &num_1, &num_2);
    if (num_1 > num_2)
    {
        printf("%d > %d\n", num_1, num_2);
    }
    else
    {
        printf("%d < %d\n", num_1, num_2);
    }
    return 0;
}
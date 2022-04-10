#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Введите целое число: ");
    scanf("%d", &num);

    int fin = num + 10;

    while (num <= fin)
    {
        printf("%d ", num);
        num++;
    }

    return 0;
}

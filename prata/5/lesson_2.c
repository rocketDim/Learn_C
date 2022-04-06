#include <stdio.h>

int main(void)
{
    int num = 0;
    
    printf("Введите целое число: ");
    scanf("%d", &num);

    while (num < 20)
    {
        printf("%d ", num++);
    }

    return 0;
}

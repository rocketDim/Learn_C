//Среднее арифментическое
#include <stdio.h>
int main(void)
{
    int num, average;
    int array[100];
    int sum = 0;
    printf("Введите число: ");
    scanf("%d", &num);

    while (num > 100 && num <= 0)
    {
        printf("Введите число еще раз: ");
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d Введите число: ", i + 1);
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    average = sum / num;
    printf("Среднее арифм. = %d\n", average);
    return 0;
}
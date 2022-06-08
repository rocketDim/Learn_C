//Функция сумма элементов массива стоящих на нечетных местах
//Пример №1
//На входе:
// size = 6
//   0   1   2   3   4  5
// {11, 32, -3, 84, -4, 0}
// 32 + 84 + 0 = 116
//На выходе: 116
#include <stdio.h>
int sum_odd_index(int arr[], int size);
int main(void)
{
    int size = 6;
    int arr[] = {11, 32, -3, 84, -4, 0};
    printf("%d\n", sum_odd_index(arr, size));
    return 0;
}
//   0   1   2   3   4  5
// {11, 32, -3, 84, -4, 0}
// 32 + 84 + 0 = 116
int sum_odd_index(int arr[], int size)
{
    // result = 0
    //|i = 0 условие не выполняется (индекс нечетный)(индекс делится на 2 с остатком)(индекс при делении на 2 дает в остатке 1)if (i % 2 == 1)
    //|result = 0
    //|i = 1 условие выполняется
    //|result = 32
    //|i = 2 условие не выполняется
    //|result = 32
    //|i = 3 условие выполняется
    //|result = 32 + 84
    //|i = 4 не выполняется
    //|result = 32 + 84
    //|i = 5 выполняется
    //|result = 32 + 84 + 0
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 1)
        {
            result = result + arr[i];
        }
    }
    return result;
}
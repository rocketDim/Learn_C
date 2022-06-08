//Функция сумма отрицательных элементов массива стоящих на нечетных местах
//Пример №1
//На входе:
// size = 6
//   0   1   2   3   4  5
// {11, -32, 3, -84, 4, 0}
// (-32) + (-84) = -116
//На выходе: -116
#include <stdio.h>
int sum_odd_index(int arr[], int size);
int main(void)
{
    int size = 6;
    int arr[] = {11, -32, 3, -84, 4, 0};
    printf("%d\n", sum_odd_index(arr, size));
    return 0;
}
//   0   1   2   3   4  5
// {11, -32, 3, -84, 4, 0}
// На выходе: -116
int sum_odd_index(int arr[], int size)
{
    // result = 0
    //|i = 0 условие не выполняется
    //|result = 0
    //|i = 1 условие выполняется
    //|result = -32
    //|i = 2 не выполняется
    //|result = -32
    //|i = 3 выполняется
    //|result = -32 + (-84)
    //|i = 4 условие не выполняется
    //|result = -32 + (-84)
    //|i = 5 условие не выполняется
    //|result = -32 + (-84) = -116
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 1 && arr[i] < 0)
        {
            result = result + arr[i];
        }
    }
    return result;
}
//Функция сумма четных эл-в массива
//Пример №1
//На входе:
// size = 6
//   0   1   2   3   4  5
// {11, 32, -3, 84, -4, 0}
// 32 + 84 + (- 4) + 0 = 112
//На выходе: 112
#include <stdio.h>
int sum_even(int arr[], int size);
int main(void)
{
    int size = 6;
    int arr[] = {11, 32, -3, 84, -4, 0};
    printf("%d\n", sum_even(arr, size));
    return 0;
}
//   0   1   2   3   4  5
// {11, 32, -3, 84, -4, 0}
// 32 + 84 + (- 4) + 0 = 112
int sum_even(int arr[], int size)
{
    // result = 0
    //|i = 0 условие не выполняется (значение элемента массива делится на 2 без остатка)
    //|result = 0
    //|i = 1 выполняется
    //|result = 32
    //|i = 2 не выполняется
    //|result = 32
    //|i = 3 выполняется
    //|result = 32 + 84
    //|i = 4 выполняется
    //|result = 32 + 84 + (-4)
    //|i = 5 выполняется
    //|result = 32 + 84 + (-4)
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        // if(i % 2 == 0 && i == 0)
        // if(arr[i] % 2 == 0 && arr[i] == 0)
        // if(arr[i] % 2 == 0 || arr[i] == 0)
        {
            result = result + arr[i];
        }
    }
    return result;
}
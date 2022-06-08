//Функция подсчета кол-ва отрицательных эл-ов стоящих на четных местах
//Пример №1
//На входе:
// size = 6
//   0   1   2   3   4  5
// {11, 32, -3, 84, -4, 0}
// 1 + 1 = 2
//На выходе: 2
#include <stdio.h>
int count_negative_elements_at_odd_index(int arr[], int size);
int main(void)
{
    int size = 6;
    int arr[] = {11, 32, -3, 84, -4, 0};
    printf("%d\n", count_negative_elements_at_odd_index(arr, size));
    return 0;
}
//   0   1   2   3   4  5
// {11, 32, -3, 84, -4, 0}
// 1 + 1 = 2
int count_negative_elements_at_odd_index(int arr[], int size)
{
    //Функция подсчета кол-ва отрицательных эл-ов стоящих на четных местах
    // result = 0
    //|i = 0 условие не выполняется (элемент отрицательный и индекс четный) if (arr[i] < 0 && i % 2 == 0)
    //|result = 0
    //|i = 1  не выполняется
    //|result = 0
    //|i = 2 выполняется
    //|result = 1
    //|i = 3 не выполняется
    //|result = 1
    //|i = 4 выполняется
    //|result = 1 + 1
    //|i = 5 не выполняется
    //|result = 1 + 1
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0 && i % 2 == 0)
        {
            result++;
        }
    }
    return result;
}
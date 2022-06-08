//программа вывода на экран суммы первой и второй половины массива
// size = 7
//  0  1  2  3  4   5   6
// {2, 5, 6, 7, 9, 14, 24}
// sum_1 = 2 + 5 + 6 = 13
// sum_2 = 7 + 9 + 14 + 24 = 54
#include <stdio.h>
int sum_first_half(int arr[], int size);
int sum_second_half(int arr[], int size);
int main(void)
{
    int size = 7;
    int arr[] = {2, 5, 6, 7, 9, 14, 24};
    printf("Сумма первой половины равна: %d\n", sum_first_half(arr, size));
    printf("Сумма второй половины равна: %d\n", sum_second_half(arr, size));
    return 0;
}
int sum_first_half(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size / 2; i++)
    {
        result = result + arr[i];
    }
    return result;
}
int sum_second_half(int arr[], int size)
{
int result = 0;
for (int i = size / 2; i < size; i++)
{
    result = result + arr[i];
}
return result;
}
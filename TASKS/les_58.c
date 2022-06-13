//функция определения является ли массив возрастающим
#include <stdio.h>
#include <stdbool.h>
// 0  1  2  3  4
//{5, 4, 3, 2, 1}
// false
// 0   1    2
//{13, 14, 15}
// true
// 0   1    2
//{13, 14, 10}
// false
_Bool is_increasing(int arr[], int size);
int main(void)
{
    int size = 3;
    int arr[] = {2, 1, 2};
    printf("%d\n", is_increasing(arr, size));
}
// 0  1  2  3  4
//{5, 4, 3, 2, 1}
// false
// i = 0 если следующий элемент массива больше текущего [i + 1] > [i], то true, иначе false
//
_Bool is_increasing(int arr[], int size)
{
    _Bool result;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }
    return result;
}
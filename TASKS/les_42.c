//Сдвиг массива вправо
#include <stdio.h>
void shift_right(int arr[], int size);
int main(void)
{
    int size = 6;
    int result;
    int arr[] = {7, 0, -2, -4, -6, 4};
    result = shift_right(arr, size);
    printf("%d\n", result);
    return 0;
}
void shift_right(int arr[], int size)
{
    for (int i = size - 1; i == 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[size - 1] = 0;
}
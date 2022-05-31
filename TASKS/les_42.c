//Сдвиг массива вправо
#include <stdio.h>
void revers(int arr[], int size);
int main(void)
{
    int size = 6;
    int arr[] = {7, 0, -2, -4, -6, 4};
    printf("%d\n", revers(arr, size));
    return 0;
}
void revers(int arr[], int size)
{
    for (int i = 1; i < size - 1; i--)
    {
        arr[i] = arr[0];
        arr[0] = 0;
    }
}
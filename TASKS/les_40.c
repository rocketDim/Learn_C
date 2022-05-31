// Сумма положительных элементов массива
#include <stdio.h>
int sum_negative(int arr[], int size);
int main(void)
{
    int size = 6;
    int arr[] = {7, 0, -2, -4, -6, 4};
    printf("%d\n", sum_negative(arr, size));
    return 0;
}

int sum_negative(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            sum = sum + arr[i];
        }
    }
    return sum;
}
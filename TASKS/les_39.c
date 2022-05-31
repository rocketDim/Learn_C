// Кол-во отрицательных элементов
#include <stdio.h>
int negative_count(int arr[], int size);

int main(void)
{
    int size = 5;
    int arr[] = {7, 0, -2, -4, -6};
    printf("%d\n", negative_count(arr, size));
    return 0;
}

int negative_count(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            result = result + 1;
        }
    }
    return result;
}
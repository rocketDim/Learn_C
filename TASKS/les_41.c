//Последнее отрицательное число
#include <stdio.h>
int last_negativ_index(int arr[], int size);
int main(void)
{
    int size = 6;
    int arr[] = {7, 0, -2, -4, -6, 4};
    printf("%d\n", last_negativ_index(arr, size));
    return 0;
}

int last_negativ_index(int arr[], int size)
{
    int result = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            result = i;
        }
    }
    return result;
}   
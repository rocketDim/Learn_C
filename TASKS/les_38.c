// Задача на сравнение элементов масива
#include <stdio.h>
int max(int arr[], int size);
int main(void)
{
    int size = 3;
    int arr[] = {7, 0, 2};
    printf("%d\n", max(arr, size));
    return 0;
}

int max(int arr[], int size)
{
    int result = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(result < arr[i])
        {
            result = arr[i];
        }
    }
    return result;
}

/*int max_v2(int arr[], int size)
{
    int result = arr[0];
    for (int i = 1; i < size; i++) // обход всех элементов массива кроме первого
    {
        if(result < arr[i])
        {
            result = arr[i];
        }
    }
    return result;
}*/


/*int max_v3(int arr[], int size)
{
    int result = arr[0];
    for (int i = 1; i < size; i++) // обход всех элементов массива кроме первого
    {
        result = max2(result, arr[i]);
    }
    return result;
}*/

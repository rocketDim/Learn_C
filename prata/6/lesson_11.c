#include <stdio.h>
void revers(int arr[], int size);
void print_array(int arr[], int size);
int main(void)
{
    int size = 8;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    revers(arr, size);
    print_array(arr, size);
    return 0;
}
void revers(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[size - i];
    }
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
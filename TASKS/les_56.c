//функция удалить из массива элемент на k-том месте
#include <stdio.h>
// 0   1   2   3
//{5, 13, 56, 77}
// k = 1
//{5, 56, 77, 0}
void delete_element(int arr[], int size, int k);
void print_array(int arr[], int size);
int main(void)
{
    int size = 4;
    int arr[] = {5, 13, 56, 77};
    int K = 1;
    delete_element(arr, size, K);
    print_array(arr, size);
    return 0;
}
//{5, 13, 56, 77}
// k = 1
//{5, 56, 77, 0}
// i = 1
// arr[1] = 56 (в текущий элемент массива записываем значение следующего элемента)
// i = 2
// arr[2] = 77
// exit for
// arr[3] = 0
void delete_element(int arr[], int size, int k)
{
    for (int i = k; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
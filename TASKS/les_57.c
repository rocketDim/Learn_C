//функция вставить в массив элемент на k-тое место
#include <stdio.h>
// 0   1   2   3
//{5, 13, 56, 77}
// k = 1
//{5, 1000, 13, 56}
void insert_element(int arr[], int size, int k, int value);
void print_array(int arr[], int size);
int main(void)
{
    int size = 4;
    int arr[] = {5, 13, 56, 77};
    int K = 1;
    int Value = 1000;
    insert_element(arr, size, K, Value);
    print_array(arr, size);
    return 0;
}
//{5, 13, 56, 77}
// k = 1
//{5, 1000, 13, 56}
// i = 4
// arr[4] = 56 = arr[i] = arr[i - 1]
// i  = 3
// arr[3] = 13
// exit for
// arr[k]  = value
void insert_element(int arr[], int size, int k, int value)
{
    for (int i = size - 1; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k] = value;
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
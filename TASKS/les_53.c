//функция. заполнить массив размера N числами по убыванию
// size = N
//{size -1, ...., 0}
#include <stdio.h>
void fill_descending(int arr[], int size);
void print_array(int arr[], int size);
int main(void)
{
    int size = 4;
    int arr[] = {5, 13, 56, 77};
    fill_descending(arr, size);
    print_array(arr, size);
    return 0;
}
// 0   1   2   3
//{5, 13, 56, 77}
//{3, 2, 1, 0}
// i = size - 1 = 3 
// arr[size -1] = arr[3] = 0  присвоил элементу с индексом 3 значение 0
// i = size - 2 = 2
// arr[size -2] = arr[2] = 1 присвоил элементу с индексом 2 значение 1 
// i = size - 3 = 1
// arr[size - 3] = arr[1] = 2 присвоил элементу с индексом 1 значение 2
// i = size - 4 = 0
// arr[size -4] = arr[0] = 3 присвоил элементу с индексом 0 значение 3
void fill_descending(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
       arr[i] = size - i - 1;
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
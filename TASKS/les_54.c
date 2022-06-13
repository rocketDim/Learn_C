//функция. заполнить массив размера N числами по убыванию вар 2
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
// i = 0 
// arr[i] = arr[0] = 3 size - i - 1 = 4 - 0 - 1 = 3
// i = 1 
// arr[i] = arr[1] = 2 
// i = 2 
// arr[i] = arr[2] = 1
// i = 3 
// arr[i] = arr[3] = 0     
void fill_descending(int arr[], int size)
{
    for (int i = 0; i < size; i++)
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
//- функция. заполнить массив размера N чётными числами по возрастанию так чтобы первый элемент был ноль
#include <stdio.h>
// 0   1   2   3
//{5, 13, 56, 77}
//{0, 2, 4, 6}
void fill_even_ascending(int arr[], int size);
void print_array(int arr[], int size);
int main(void)
{
    int size = 4;
    int arr[] = {5, 13, 56, 77};
    fill_even_ascending(arr, size);
    print_array(arr, size);
    return 0;
}
//i = 0
// arr[i] = 0 
//i = 1
// arr[i] = 2  i * 2
//i = 2
//arr[i] = 4
//i = 3
//arr[i] = 6
void fill_even_ascending(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 2;
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
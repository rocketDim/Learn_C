//Сдвиг массива вправо
#include <stdio.h>
void shift_right(int arr[], int size);
void print_array(int nums[], int size);
int main(void)
{
    int size = 6;
    int arr[] = {7, 0, -2, -4, -6, 4};
    print_array(arr, size);
    shift_right(arr, size);
    print_array(arr, size);
    return 0;
}
// 0   1   2   3   4  5
//{7, 0, -2, -4, -6, 4}
//|i = 5
//|arr[i] = arr[5] = 4
//|arr[i-1] = arr[4]= -6
//
// 0  1   2   3   4   5
//{7, 0, -2, -4, -6, -6}
//|i = 4
//|arr[i] = arr[4] = -6
//|arr[i-1] = arr[3]= -4
//
// 0  1   2   3   4   5
//{7, 0, -2, -4, -4, -6}
//|i = 3
//|arr[i] = arr[3] = -4
//|arr[i-1] = arr[2]= -2
//
// 0  1   2   3   4   5
//{7, 0, -2, -2, -4, -6}
//i = 2
//|arr[i] = arr[2] = -2
//|arr[i-1] = arr[1]= 0
//
// 0  1  2   3   4   5
//{7, 0, 0, -2, -4, -6}
//i = 1
//|arr[i] = arr[1] = 0
//|arr[i-1] = arr[0]= 7
//
// 0  1  2   3   4   5
//{7, 7, 0, -2, -4, -6}
//выход из цикла
//|arr[size -1] = arr[5] = 0
// 0  1  2   3   4  5
//{0, 7, 0, -2, -4, -6}
// 0   1   2   3   4  5
//{7, 0, -2, -4, -6, 4}

void shift_right(int arr[], int size)
{
    for (int i = size - 1; i != 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = 0;
}
void print_array(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
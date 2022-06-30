//поиск определенного числа в массиве
#include<stdio.h>
//{7, 13, 56, 77, 189}
// 3
int search(int arr[], int size, int target);
int main(void)
{
    int size = 8;
    int arr[] = {7, 13, 56, 77, 189, 0, 77, 5};
    int Target = 77;
    printf("%d\n", search(arr, size, Target));
    return 0;
}
//{7, 13, 56, 77, 189}
// 3
//(если тек эл массива равен target, то записываем в result i)
// i = 0 не выполняется - 1
// i = 1 не выполняется - 1
// i = 2 не выполняется - 1
// i = 3 выполняется result = 3
// i = 4 выполняется result = 3
// i = 5 
int search(int arr[], int size, int target)
{
    int result = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            result = i;
        }
    }
    return result;
}


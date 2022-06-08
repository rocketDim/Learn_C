//функция сумма отрицательных элементов массива от m до n (включительно)стоящих на нечетных местах
// size = 7
// m = 2
// n = 5
//  0   1  2   3  4    5   6
// {2, -5, 6, -7, 9, -14, 24}
// (-7)+ (-14) = -21
#include <stdio.h>
int sum_from_m_to_n(int arr[], int size, int M, int N);
int main(void)
{
    int size = 7;
    int m = 2;
    int n = 5;
    int arr[] = {2, -5, 6, -7, 9, -14, 24};
    printf("%d\n", sum_from_m_to_n(arr, size, m, n));
    return 0;
}
int sum_from_m_to_n(int arr[], int size, int M, int N)
{
    //  0   1  2   3  4    5   6
    // {2, -5, 6, -7, 9, -14, 24}
    // (-7)+ (-14) = -21
    // result = 0
    //| i = 2  не выполняется
    //| result = 0
    //|i = 3 выполняется
    //| result = -7
    //| i = 4 не выполняется
    //| result = -7
    //| i = 5 выполняется
    //| result = -7 + (-14) = -21
    int result = 0;
    for (int i = M; i <= N; i++)
    {
        if (arr[i] < 0 && i % 2 == 1)
        {
            result = result + arr[i];
        }
    }

    return result;
}
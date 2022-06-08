//функция сумма элементов массива от m до n (включительно)
// size = 7
// m = 2
// n = 5
//  0  1  2  3  4   5   6
// {2, 5, 6, 7, 9, 14, 24}
// 6 + 7 + 9 + 14 = 36
#include <stdio.h>
int sum_from_m_to_n(int arr[], int size, int M, int N);
int main(void)
{
    int size = 7;
    int m = 2;
    int n = 5;
    int arr[] = {2, 5, 6, 7, 9, 14, 24};
    printf("%d\n", sum_from_m_to_n(arr, size, m, n));
    return 0;
}
int sum_from_m_to_n(int arr[], int size, int M, int N)
{
    //  0  1  2  3  4   5   6
    // {2, 5, 6, 7, 9, 14, 24}
    // 6 + 7 + 9 + 14 = 36
    // result = 0
    //| i = 2
    //| result = 6
    //|i = 3
    //| result = 6 + 7
    //| i = 4
    //| result = 6 + 7 + 9
    //| i = 5
    //| result = 6 + 7 + 9 + 14
    int result = 0;
    for (int i = M; i <= N; i++)
    {
        result = result + arr[i];
    }

    return result;
}
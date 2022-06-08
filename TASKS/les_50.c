//программа вывода на экран суммы первой и второй половины массива
// size = 7
//  0  1  2  3  4   5   6
// {2, 5, 6, 7, 9, 14, 24}
// sum_1 = 2 + 5 + 6 = 13
// sum_2 = 7 + 9 + 14 + 24 = 54
#include <stdio.h>
int sum_from_m_to_n(int arr[], int size, int M, int N);

int main(void)
{
    int size = 7;
    int arr[] = {2, 5, 6, 7, 9, 14, 24};
    printf("Сумма первой половины равна: %d\n", sum_from_m_to_n(arr, size, 0, size / 2));
    printf("Сумма второй половины равна: %d\n", sum_from_m_to_n(arr, size, size / 2, size - 1));
    return 0;
}

int sum_from_m_to_n(int arr[], int size, int M, int N)
{
    int result = 0;
    for (int i = M; i <= N; i++)
    {
        result = result + arr[i];
    }

    return result;
}

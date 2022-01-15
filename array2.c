#include <stdio.h>

int main()
{
    const int N = 3;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        printf("Введите %d элемент из %d: ", i, N);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = 0;
    int max = arr[0]; // arr[i] > max;
    int min = arr[0]; // arr[i] < min;

    for (int i = 0; i < N; i++)
    {
        sum += arr[i]; // sum = sum + arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("SUM: %d, AVG: %d, MAX: %d, MIN: %d\n", sum, (sum / N), max, min);

    return 0;
}
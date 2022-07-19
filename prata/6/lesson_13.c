#include <stdio.h>
int main(void)
{
    const int N = 3;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        printf("Введите %d из %d: ", i, N);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
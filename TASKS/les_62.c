#include <stdio.h>
#define SIZE 8
int main(void)
{
    int arr[SIZE];
    for (int i = 0; i < SIZE - 1; i++)
    {
        arr[i] = 2 * (i + 1);
    }
    for (int i = 0; i < SIZE - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
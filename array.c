#include <stdio.h>

int main()
{
    int i;
    const int size = 5;
    int arr[size];

    for (i = 0; i < size; i++)
    {
        arr[i] = i - 2;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if ((i + 1) < size)
            printf(", ");
    }
    printf("\n");

    for (i = 0; i < size; i++)
    {
        arr[i] = arr[i] + i;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if ((i + 1) < size)
            printf(", ");
    }
    printf("\n");

    return 0;
}

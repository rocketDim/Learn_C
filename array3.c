#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 6;

int main()
{

    int arr[N];

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 41;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int chet = 0;
    int nech = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            chet++;
        }
        else
        {
            nech++;
        }
    }
    printf("Четные: %d\nНечетные: %d\n",  chet, nech);

    return 0;
}

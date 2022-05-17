#include <stdio.h>
int main(void)
{
    // header
    printf("  |");
    for (int i = 2; i <= 9; i++)
    {
        printf("%2d", i);
    }
    printf("\n");
    // divider
    for (int t = 0; t < 19; t++)
    {
        printf("-");
    }
    printf("\n");
    // body
    for (int row = 2; row < 9; row++)
    {
        printf("%d |", row);
        for (int col = 2; col < 9; col++)
        {
            printf("%2d ", row * col);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
// Задача с прямоугольником
#include <stdio.h>
#include <string.h>

int main(void)
{
    int width = 8;
    int height = 6;
    int i, j;
    for (i = 0; i < width; i++)
    {
        printf("x");
    }
    printf("\n");

    for (i = 0; i < height - 2; i++)
    {
        printf("x");
        for (j = 0; j < width -2; j++)
        {
            printf(" ");
        }
        printf("x");
        printf("\n");
    }

    for (i = 0; i < width; i++)
    {
        printf("x");
    }
    printf("\n");
    return 0;
}

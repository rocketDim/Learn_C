#include <stdio.h>
int main(void)
{
    int width = 10;
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++)
    {
        for(j = 0; j < width; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
void box(int height, int width);
int main(void)
{
    int m = 10;
    int n = 5;
    box(m, n); 
    return 0;
}
void box(int width, int height)
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("x");
        }
        printf("\n");
    }
}
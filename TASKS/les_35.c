//Задача на прямоугольник
#include <stdio.h>
int main(void)
{
    int m = 10;
    int n = 5;
    for (int i = 0; i < m; i++)
    {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < n - 2; i++)
    {
        printf("|");
        for (int j = 0; j < m - 2; j++)
        {
            printf(" ");
        }
            printf("|");
            printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        printf("-");
    }
    printf("\n");
     
    return 0;
}
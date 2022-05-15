#include <stdio.h>
int main(void)
{
    for (int i = 2; i <= 9; i++)
    {
        printf("%2d", i);
    }
    printf("\n");
    for (int t = 2; t <= 9; t++)
    {
        printf(" -", t);
    }
    printf("\n");
    for (int a = 2; a < 9; a++)
    {
        printf("%d|\n", a);
    }
    printf("\n");
    
    return 0;
}
// Задача с прямоугольником
#include <stdio.h>

int main(void)
{
    int n;
    for (n = 0; n < 8; n++)
        printf("x");
    printf("\n");

    int a;
    char b = 'x';
    for (a = 1; a < 4; a++)
        printf("%c%7c\n", b, b);

    int t;
    for (t = 0; t < 8; t++)
        printf("x");
    printf("\n");
    return 0;
}

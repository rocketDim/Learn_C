#include <stdio.h>
int main(void)
{
    int n = 3;
    for (int i = 0; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(", ");
        }
        else
        {
            printf(". ");
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
_Bool Is_Element_Last(int current, int N);
int main(void)
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (!Is_Element_Last(i, n))
        {
            printf(", ");
        }
        else
        {
            printf(". ");
        }
    }
    printf("\n");
    return 0;
}
_Bool Is_Element_Last(int current, int N)
{
    if (current == N)
        return true;
    else
        return false;
}
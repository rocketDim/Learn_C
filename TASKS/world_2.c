#include <stdio.h>
int main(void)
{
    int height = 1;
    int wight = 1;
    while (height <= 3)
    {
        printf("x");
        height++;
        
        while (wight <= 8)
        {
            printf(" ");
            wight++;
        }
        printf("\n");
    }

    return 0;
}
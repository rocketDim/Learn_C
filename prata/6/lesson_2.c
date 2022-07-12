#include <stdio.h>
int main(void)
{
    int height = 6;
    int widht = 6;
    for (int i = 0; i < height; i++)
    {
        for (char j = i; j < widht; j++)
        {
            printf("$");
        }
       printf("\n"); 
    }
    return 0;
}
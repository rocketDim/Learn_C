#include <stdio.h>
int main(void)
{
    int N = 7;
    for (int i = 0; i <= N; i++)
    {
        if(i % 2 == 0)
        {
            printf("чет ");
        }
        else
        {
            printf("нечет ");
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 0;
    while(1)
    {
        srand(time(NULL));
        printf("%d [%d]\n", rand(), num++);
    }

    return 0;
}

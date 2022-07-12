#include <stdio.h>
#define SIZE 26
int main(void)
{
    char arr[SIZE];
    for (char i = 'a'; i < ('a' + SIZE); i++)
    {
        printf("%c ", i);
    }
    printf("\n");
    return 0;
}
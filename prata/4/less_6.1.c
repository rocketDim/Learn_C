#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    char sur[40];
    printf("Kaк вас зовут? ");
    scanf("%s %s", name, sur);
    printf("%10s %10s\n%10zd %10zd\n", name, sur, strlen(name), strlen(sur));

    return 0;
}

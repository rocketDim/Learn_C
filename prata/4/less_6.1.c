#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[10];
    char sur[10];
    printf("Kaк вас зовут? ");
    scanf("%s %s", name, sur);
    printf("%7.7s %7.7s\n%7zd %7zd\n", name, sur, strlen(name), strlen(sur));

    return 0;
}

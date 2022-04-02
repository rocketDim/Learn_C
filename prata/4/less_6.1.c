#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    char sur[40];
    printf("Kaк вас зовут? ");
    scanf("%s %s", name, sur);

    printf("%s %s\n%*zd %*zd\n", name, sur,
           (int)strlen(name), strlen(name), (int)strlen(sur), strlen(sur));

    printf("%s %s\n%*zd %-*zd\n", name, sur,
           (int)strlen(name) * -1, strlen(name), (int)strlen(sur), strlen(sur));

    return 0;
}

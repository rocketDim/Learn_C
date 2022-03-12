#include <stdio.h>
#define meter 100
int main(void)
{
    char name[20];
    float centy;

    printf("Здравствуйте! Как вас зовут? ");
    scanf("%s", name);
    printf("Какой у вас рост в сантиметрах? ");
    scanf("%f", &centy);
    printf("Хорошо,%s, ваш рост составляет %.2f метров.\n", name, (centy / meter));

    return 0;
}

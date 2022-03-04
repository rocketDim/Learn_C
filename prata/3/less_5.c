#include <stdio.h>

int main(void)
{
    int age;
    float sek;
    sek = 3.156e7 * age;
    printf("Input age: ");
    scanf("%d", &age);
    printf("My age: %d, my sekonds: %.2f\n", age, sek);

    return 0;
}
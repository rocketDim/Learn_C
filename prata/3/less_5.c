#include <stdio.h>

int main(void)
{
    int age;
    float sek;
    printf("Input age: ");
    scanf("%d", &age);
    printf("My age: %d, my sekonds: %.2f\n", age, 3.156e7 * age);

    return 0;
}
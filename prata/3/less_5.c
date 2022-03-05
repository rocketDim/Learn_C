#include <stdio.h>

int main(void)
{
    float age;
    printf("Input age: ");
    scanf("%f", &age);
    printf("My age: %f, my seconds: %f\n", age, 3.156e7 * age);

    return 0;
}
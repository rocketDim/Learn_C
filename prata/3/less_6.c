#include <stdio.h>

int main(void)
{
    float qt;

    printf("Input quart: ");
    scanf("%f", &qt);
    printf("Молекулы: %.2f\n", (950 / (3.0e-23)) * qt);

    return 0;
}
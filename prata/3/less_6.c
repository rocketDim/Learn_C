#include <stdio.h>

int main(void)
{
    int qt;
    float mol;
    mol = ((3.0e-23) * 950);

    printf("Input quart: ");
    scanf("%d", &qt);
    printf("Молекулы: %.2f\n", mol);

    return 0;
}
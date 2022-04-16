#include<stdio.h>

int main(void)
{
    char a[40], b[40];
    float f = 2;

    printf("a: ");
    scanf("%s", a);

    printf("f: ");
    scanf("%f", &f);

    printf("b: ");
    scanf("%s", b);

    printf("%s %s %f\n", a, b, f);


    printf("\n---------------------------------\n");
    scanf("%s %f %s", a, &f, b);
    printf("%s %s %f", a, b, f);

    return 0;
}
#include <stdio.h>

int kube(double num, double kub)
{
    double num, kub;
    kub = num * num * num;

    printf("%lf ", kub);

    return 0;
}

int main(void)
{
    double num, kub;

    printf("Введите число: ");
    scanf("%lf", &num);

    kub = num * num * num;

    printf("%lf ", kub);

    return 0;
}

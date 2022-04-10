#include <stdio.h>

void kube(double numer)
{
    double kub;
    kub = numer * numer * numer;

    printf("%.2lf\n", kub);
}

int main(void)
{
    double num;
    printf("Введите число: ");
    scanf("%lf", &num);

    kube(num);

    return 0;
}

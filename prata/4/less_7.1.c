#include <stdio.h>
#include <float.h>

int main()
{
    double m = 1.0 / 3.0;
    float d = 1.0 / 3.0;
    printf("Double: %.4f, %.12f, %.20f\n", m, m, m);
    printf("Float:  %.4f, %.12f, %.20f\n", d, d, d);
    printf("Точность double: %d знаков\n", DBL_DIG);
    printf("Точность float: %d знаков\n", FLT_DIG);
    

    return 0;
}
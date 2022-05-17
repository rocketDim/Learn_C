#include <stdio.h>
int days_is_year(int year);
int main(void)
{
    int num, result;
    printf("Введите год: ");
    scanf("%d", &num);
    result = days_is_year(num);
    printf("%d\n", result);
    return 0;
}
int days_is_year(int year)
{

    if ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0)))
    {
        return 366;
    }
    else
    {
        return 365;
    }
}
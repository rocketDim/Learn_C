#include <stdio.h>
#include<stdbool.h>
_Bool is_leap_year(int year);
int main(void)
{
    int num, result;
    printf("Введите год: ");
    scanf("%d", &num);
    result = is_leap_year(num);
    printf("%d\n", result);
    return 0;
}
_Bool is_leap_year(int year)
{
    if ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
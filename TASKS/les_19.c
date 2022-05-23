//Программа выводит вид в эксоненциальной форме
#include<stdio.h>
int main(void)
{
    float num = 345.56;
    printf("%.3f %.3e\n", num, num);
    return 0;
}
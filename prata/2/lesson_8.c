#include <stdio.h>

void one_three(void);
void two(void);


int main()
{
    printf("начинаем:\n");
    one_three();
    printf("порядок!\n");


    return 0;
}

void one_three(void)
{
    printf("один\n");
    two();
    printf("\n");
    printf("три\n");

}
void two(void)
{
    printf("два");
}
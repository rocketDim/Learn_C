#include <stdio.h>
int main(void)

{
    int count, sum, num;
    count = 0;
    sum = 0;
    scanf("%d", &num);
    
    while (count++ > 0)
        
        sum = sum + count;
    
    printf("sum = %d\n", sum);

    return 0;
}
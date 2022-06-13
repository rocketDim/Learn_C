#include <stdio.h>
void input_array(int nums[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("Enter %d from %d: ", i, size);
    scanf("%d", &nums[i]);
  }
}
int main(void)
{
  int nums[];
  int size = 3;

  return 0;
}
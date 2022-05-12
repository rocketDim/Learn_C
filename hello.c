#include <stdio.h>

int main(void)
{
  int weght = 8;
  int hidth = 6;
  for (int i = 0; i < weght; i++)
  {
    printf("x");
  }
  printf("\n");

  for (int j = 0; j < hidth - 2; j++)
  {
    printf("x");
    for (int t = 0; t < weght - 2; t++)
    {
      printf(" ");
    }
    printf("x");
    printf("\n");
  }

  for (int i = 0; i < weght; i++)
  {
    printf("x");
  }
  printf("\n");
  return 0;
}

#include <stdio.h>

int main()
{
  int cows = 6;

  if (cows > 1)
    printf("We have cows\n");

  if (cows > 10)
    printf("loads of them!\n");

  else
    printf("Executing else part...!\n");

  if (cows == 5 )
  {
    printf("We have 5 cows\n");
  }
  else if (cows == 6 )
  {
    printf("We have 6 cows\n");
  }
}

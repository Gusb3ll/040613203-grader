#include <stdio.h>

int main()
{
  int n;
  int a = 0, b = 1, nextTerm;

  scanf("%d", &n);

  if (n < 1 || n > 1000)
  {
    return 1;
  }
  while (a <= n)
  {
    printf("%d ", a);
    nextTerm = a + b;
    a = b;
    b = nextTerm;
  }

  return 0;
}
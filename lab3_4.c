#include <stdio.h>

int main()
{
  double a, r;
  int n;

  scanf("%lf %lf %d", &a, &r, &n);

  if (a <= 0.000 || a >= 1000.000 || r <= 0.000 || r >= 1000.000 || n < 1 || n > 1000)
  {
    return 1;
  }

  double sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += a;
    a *= r;
  }

  printf("%.3lf", sum);

  return 0;
}

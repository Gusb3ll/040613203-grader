#include <stdio.h>

int main()
{
  double a, b;
  char opt;

  scanf("%lf %c %lf", &a, &opt, &b);

  if (opt == '+')
    printf("%.0lf", a + b);
  else if (opt == '-')
    printf("%.0lf", a - b);
  else if (opt == '*')
    printf("%.0lf", a * b);
  else if (opt == '/')
    printf("%.2lf", a / b);
  else
    printf("invalid operator");

  return 0;
}
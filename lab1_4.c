#include <stdio.h>

int main()
{
  int in, h, m, s;

  scanf("%d", &in);

  h = in / 3600;
  m = (in % 3600) / 60;
  s = in % 60;

  printf("%d %d %d", h, m, s);

  return 0;
}
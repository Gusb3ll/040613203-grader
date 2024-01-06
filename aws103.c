#include <stdio.h>

int main()
{
  char time[5];
  int h, m;

  scanf("%4s", time);
  sscanf(time, "%2d:%2d", &h, &m);

  if (h < 7 || h > 9)
  {
    printf("N");
  }
  else if (h == 7 && m < 10)
  {
    printf("N");
  }
  else if (h == 9 && m > 30)
  {
    printf("N");
  }
  else
  {
    printf("Y");
  }

  return 0;
}
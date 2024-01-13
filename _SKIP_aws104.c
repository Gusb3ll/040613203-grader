#include <stdio.h>
#include <string.h>

int main()
{
  int year;
  double grade;
  char help[1];

  scanf("%d %lf %s", &year, &grade, help);

  if (year == 1)
  {
    printf("year < 2");

    return 0;
  }

  if (year != 2)
  {
    if (strcmp(help, "Y") != 0)
    {
      printf("no help");

      return 0;
    }
    if (!(grade >= 3.00))
    {
      printf("not approved");

      return 0;
    }

    printf("approved");

    return 0;
  }
  else
  {
    if (strcmp(help, "Y") != 0)
    {
      printf("no help");

      return 0;
    }
    if (!(grade >= 2.5))
    {
      printf("grade < 2.5");

      return 0;
    }

    printf("approved");

    return 0;
  }

  return 0;
}
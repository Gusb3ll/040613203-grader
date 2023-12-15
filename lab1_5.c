#include <stdio.h>

int main()
{
  char str;

  scanf("%c", &str);

  if (str >= 'A' && str <= 'Z')
    str += 32;

  printf("%c", str);

  return 0;
}
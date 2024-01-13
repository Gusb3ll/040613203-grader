#include <stdio.h>

const char *getStr(int num)
{
  switch (num)
  {
  case 0:
    return "Zero";
  case 1:
    return "One";
  case 2:
    return "Two";
  case 3:
    return "Three";
  case 4:
    return "Four";
  case 5:
    return "Five";
  case 6:
    return "Six";
  case 7:
    return "Seven";
  case 8:
    return "Eight";
  case 9:
    return "Nine";
  default:
    return "Invalid";
  }
}

int main()
{
  char numStr[4];
  int a, b, c;

  scanf("%s", numStr);

  a = numStr[0] - '0';
  b = numStr[1] - '0';
  c = numStr[2] - '0';

  const char *cha = getStr(a);
  const char *chb = getStr(b);
  const char *chc = getStr(c);

  printf("%s %s %s\n", cha, chb, chc);

  return 0;
}

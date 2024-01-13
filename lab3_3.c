#include <stdio.h>
#include <string.h>

int main()
{
  char input[100];

  scanf("%s", input);

  int length = strlen(input);

  for (int i = 0; i < length / 2; i++)
  {
    char temp = input[i];
    input[i] = input[length - i - 1];
    input[length - i - 1] = temp;
  }

  printf("%s", input);

  return 0;
}
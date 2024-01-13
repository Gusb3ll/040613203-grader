#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  int numbers[n];
  char results[n][4];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &numbers[i]);

    int isPrime = 1;
    for (int j = 2; j * j <= numbers[i]; j++)
    {
      if (numbers[i] % j == 0)
      {
        isPrime = 0;
        break;
      }
    }

    if (isPrime)
    {
      snprintf(results[i], sizeof(results[i]), "yes");
    }
    else
    {
      snprintf(results[i], sizeof(results[i]), "no");
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("%s\n", results[i]);
  }

  return 0;
}

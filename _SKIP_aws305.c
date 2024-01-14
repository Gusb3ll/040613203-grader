#include <stdio.h>

int main()
{
  int r, c;

  scanf("%d %d", &r, &c);

  int arr[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < r; i++)
  {
    int rowSum = 0;
    for (int j = 0; j < c; j++)
    {
      rowSum += arr[i][j];
    }
    arr[i][c] = rowSum;
  }

  for (int j = 0; j < c; j++)
  {
    int colSum = 0;
    for (int i = 0; i < r; i++)
    {
      colSum += arr[i][j];
    }
    arr[r][j] = colSum;
  }

  int totalSum = 0;
  for (int i = 0; i < r; i++)
  {
    totalSum += arr[i][c];
  }
  arr[r][c] = totalSum;

  for (int i = 0; i <= r; i++)
  {
    for (int j = 0; j <= c; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

#include <stdio.h>

// 200iq solution
int main()
{
  int k;
  scanf("%d", &k);

  char answer[k + 1];
  scanf("%s", answer);

  int n;
  scanf("%d", &n);

  int scores[n];
  for (int i = 0; i < n; i++)
  {
    char student_answer[k + 1];
    scanf("%s", student_answer);

    int score = 0;
    for (int j = 0; j < k; j++)
    {
      if (answer[j] == student_answer[j])
      {
        score++;
      }
    }

    scores[i] = score;
  }

  for (int i = 0; i < n; i++)
  {
    printf("std %d => %d\n", i + 1, scores[i]);
  }

  return 0;
}

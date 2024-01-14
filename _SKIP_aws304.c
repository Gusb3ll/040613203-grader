#include <stdio.h>

// 200iq solution
int main()
{
  char answer[21];
  scanf("%s", answer);

  int n;
  scanf("%d", &n);

  int scores[n];
  for (int i = 0; i < n; i++)
  {
    char student_answer[21];
    scanf("%s", student_answer);

    int count = 0;
    int score = 0;
    for (int j = 0; j < 21; j++)
    {
      if (answer[j] == student_answer[j])
      {
        if (count < 16)
        {
          count++;
        }
        if (count >= 16 && count <= 18)
        {
          score += 2;
        }
        if (count >= 19 && count <= 20)
        {
          score += 3;
        }
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

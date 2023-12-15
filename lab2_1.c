#include <stdio.h>

int main()
{
  float w, h, bmi;

  scanf("%f %f", &w, &h);

  bmi = w / (h * h);

  if (bmi < 18.5)
    printf("underweight");
  else if (bmi < 25)
    printf("normal weight");
  else if (bmi < 30)
    printf("overweight");
  else
    printf("obese");

  return 0;
}